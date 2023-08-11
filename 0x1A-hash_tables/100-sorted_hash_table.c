#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - create sorted hsh table
 * @size: size
 * Return: NULL on failure pointer on success
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	unsigned int long i;

	ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - add to hash table
 * @ht: table
 * @key: key
 * @value: value of key
 * Return: 1 on success 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp;
	char *val;
	unsigned long int i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	val = strdup(value);
	if (!val)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val;
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
	{
		free(val);
		return (0);
	}
	new->key = strdup(key);
	if (!(new->key))
	{
		free(val);
		free(new);
		return (0);
	}
	new->value = val;
	new->next = ht->array[i];
	ht->array[i] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL  && strcmp(temp->next->key, key))
				temp = temp->next;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - retrieve from hash table
 * @ht: table
 * @key: key of value
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int i;

	if (!ht || !key || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - print hash table
 * @ht: table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print table in reverse
 * @ht: table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;
	node = ht->stail;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete hash table
 * @ht: table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (!ht)
		return;
	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(head->array);
	free(head);
}

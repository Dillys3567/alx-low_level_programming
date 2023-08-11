#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - add to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 on succes 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val = NULL, *keys = NULL;
	unsigned long int index = 0;
	hash_node_t *temp = NULL, *new = NULL;

	if ((!ht) || (!key) || !val || strlen(key) == 0)
		return (0);
	val = strdup(value);
	keys = strdup(key);
	if (!keys || !val)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(keys);
		free(val);
		return (0);
	}
	new->key = keys;
	new->value = val;
	new->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] != NULL)
	{
		temp = (ht->array)[index];
		while (temp)
		{
			if (strcmp(temp->key, keys) == 0)
			{
				free((ht->array)[index]->value);
				(ht->array)[index]->value = val;
				free(keys);
				free(new);
				return (1);
			}
			temp = temp->next;
		}
		temp = (ht->array)[index];
		new->next = temp;
		(ht->array)[index] = new;
	}
	else
		(ht->array)[index] = new;
	return (1);
}

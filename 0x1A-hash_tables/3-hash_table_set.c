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
	char *val;
	unsigned long int index, i;
	hash_node_t *temp = NULL;

	if ((!ht) || (*key == '\0') || !key || value == NULL)
		return (0);
	val = strdup(value);
	if (!val)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
	{
		free(val);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = val;
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}

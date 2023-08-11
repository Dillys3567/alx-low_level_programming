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
	char *val = strdup(value);
	unsigned long int index, size;
	hash_node_t *temp = NULL;

	if ((!ht) || (*key == '\0') || val == NULL)
		return (0);
	size  = ht->size;
	index = key_index((unsigned char *)key, size);
	if (!(((ht->array)[index])->key))
	{
		((ht->array)[index])->key = strdup(key);
		((ht->array)[index])->value = val;
		((ht->array)[index])->next = NULL;
	}
	else
	{
		temp = (ht->array)[index];
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next->key = strdup(key);
		temp->next->value = val;
		temp->next->next = NULL;
	}
	return (1);
}

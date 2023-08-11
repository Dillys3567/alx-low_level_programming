#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value
 * @ht: hash table
 * @key: key of value
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;
	char *value = NULL;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL || index >= ht->size)
		return (NULL);

	temp = (ht->array)[index];
	while (!value)
	{
		if (strcmp(temp->key, key) == 0)
			value = temp->value;
		temp = temp->next;
	}
	return (value);
}

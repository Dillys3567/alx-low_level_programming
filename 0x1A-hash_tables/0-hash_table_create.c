#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));

	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t) * size);
	if (!(new->array))
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		(new->array)[i] = NULL;
	}
	return (new);
}

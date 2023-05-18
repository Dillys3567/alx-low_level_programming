#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - check malloc
 * @b: size of array
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(sizeof(int) * b);
	if (c == NULL)
	{
		return (98);
	}
	return (c);
}

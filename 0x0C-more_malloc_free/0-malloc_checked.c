#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - check malloc
 * @b: size of array
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}

#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - allocate memory block
 * @ptr: pointer to previous allocation
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *b;
	char *a;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	b = malloc(new_size);
	if (!ptr1)
		return (NULL);
	a = ptr;
	if (new_size < old_size)
	{
	for (i = 0; i < new_size; i++)
		b[i] = a[i];
	}
	if (new_size > old_size)
	{
	 for (i = 0; i < old_size; i++)
		b[i] = a[i];
	}
	free(ptr);
	return (b);
}

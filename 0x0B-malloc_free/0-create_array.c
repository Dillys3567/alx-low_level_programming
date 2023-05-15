#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create array of characters
 * @size: size of array
 * @c: inititialize c
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *b;

	if (size <= 0)
	{
		return (0);
	}
	else
	{
		b = (char *)malloc(size * sizeof(char));
		if (b == NULL)
		{
			return (0);
		}
		for (i = 0; i < size; i++)
		{
			b[i] = c;
		}
		return (b);
	}
}

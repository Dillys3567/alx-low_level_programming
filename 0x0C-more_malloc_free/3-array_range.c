#include "main.h"
#include <stdlib.h>
/**
 * *array_range - int array
 * @min: lowest
 * @max: highest
 * Return: array pointer
 */
int *array_range(int min, int max)
{
	int *b;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	b = malloc(sizeof(int) * len);
	if (!b)
		return (NULL);
	for (i = 0; min <= max; i++)
		b[i] = min++;
	return (b);
}

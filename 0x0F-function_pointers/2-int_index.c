#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array
 * @size: size of array
 * @cmp: compare function
 * Return: index of first hit
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0, temp;

	if (size < 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		temp = (*cmp)(array[index]);
		if (temp != 0)
			return (index);
	}
	return (-1);
}

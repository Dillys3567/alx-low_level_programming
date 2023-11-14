#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches linearly for a value in array
 * @array: array being searched
 * @size: size of array
 * @value: value to find
 * Return: value found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int val = -1;
	size_t x;

	if (!array)
		return (val);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n",x , *array);
		if (*array == value)
		{
			val = *array;
			break;
		}
		array++;
	}
	return (val);
}

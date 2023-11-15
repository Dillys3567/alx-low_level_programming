#include "search_algos.h"
/**
 * binary_search - binary search for a value
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int val = -1;
	size_t left = 0, right = size - 1, m, i;

	if (!array)
		return (val);
	while (left <= right)
	{
		m = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%ld", i);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[m] == value)
		{
			return (m);
		}
		else if (value > array[m])
			left = m + 1;
		else if (value < array[m])
			right = m - 1;
	}
	return (val);
}


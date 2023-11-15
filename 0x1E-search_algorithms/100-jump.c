#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search algo for finding value
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int val = -1;
	size_t step = sqrt(size), prev = 0, i;

	if (!array)
		return (val);
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[(int)fmin(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (val);
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	for (i = prev; i < fmin(step, size); ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (val);
}

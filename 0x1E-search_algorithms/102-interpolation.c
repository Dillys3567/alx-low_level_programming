#include "search_algos.h"
/**
 * interpolation_search - interpolation search for value
 * @array: array to search
 * @size: size of array
 * @value: to find
 * Return: index of vaue or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int val = -1;
	size_t low = 0, high = size - 1;

	if (!array)
		return (val);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] -
			array[low])) * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			val = pos;
			break;
		}
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%ld] is out of range\n", low);
	return (val);
}

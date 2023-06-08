#include "main.h"
/**
 * clear_bit - clear a bit
 * @n: value
 * @index: index
 * Return: 1 on success -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}

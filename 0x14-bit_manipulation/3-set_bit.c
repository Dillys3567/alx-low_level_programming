#include "main.h"
/**
 * set_bit - set bit
 * @n: array of numbers
 * @index: index
 * Return: 1 on succes -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}

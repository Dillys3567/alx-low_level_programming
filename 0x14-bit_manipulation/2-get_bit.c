#include "main.h"
/**
 * get_bit - return value of bit at given index
 * @n: value
 * @index: index
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}

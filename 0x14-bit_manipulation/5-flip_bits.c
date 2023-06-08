#include "main.h"
/**
 * flip_bits - flip bits
 * @n: value
 * @m: second value
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res)
	{
		res &= res - 1;
		count++;
	}
	return (count);
}

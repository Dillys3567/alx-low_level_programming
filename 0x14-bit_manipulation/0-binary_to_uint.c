#include "main.h"
/**
 * binary_to_uint - binary to int
 * @b: string of 0 and 1
 * Return: converted number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int x;

	if (b == NULL)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		sum = 2 * sum + (b[x] - '0');
	}
	return (sum);
}

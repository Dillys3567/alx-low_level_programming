#include "main.h"
/**
 * print_binary - binary representation
 * @n: int
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int curr = 0;

	for (x = 63; x >= 0; x--)
	{
		curr = n >> x;
		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

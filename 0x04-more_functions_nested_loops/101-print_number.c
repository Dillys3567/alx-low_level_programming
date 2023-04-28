#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer
 */
void print_number(int n)
{
	unsigned int num, pv, count;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	pv = num;
	count = 1;

	while(pv > 9)
	{
		pv /= 10;
		count *= 10;
	}

	for (;count >= 1; count /=10)
	{
		_putchar(((num / count) % 10) + '0');
	}
}

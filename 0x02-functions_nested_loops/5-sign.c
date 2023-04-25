#include "main.h"
/**
 * print_sign - prints sign  of number
 * @n: number
 * Return: returns 1 for positive, 0 for 0 and -1 for negative
 */
int print_sign(int n)
{
	int num;

	num = n;
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return(-1);
	}
}

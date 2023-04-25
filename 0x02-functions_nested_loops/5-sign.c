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
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return(-1);
	}
}

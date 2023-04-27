#include "main.h"
/**
 * print_line - prints a number of underscores
 * @n: number of underscores
 */
void print_line(int n)
{
	int count;

	if ((n != 0) || !(n < 0))
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

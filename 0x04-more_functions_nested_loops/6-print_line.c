#include "main.h"
/**
 * print_line - prints a number of underscores
 * @n: number of underscores
 */
void print_line(int c)
{
	int count;

	if ((c != 0) || !(c < 0))
	{
		for (count = 0; count < c; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

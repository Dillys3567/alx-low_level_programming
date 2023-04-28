#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of \ printed
 */
void print_diagonal(int n)
{
	int line, space;

	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (line < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: number of backslash
 */
void print_diagonal(int n)
{
	int count;
	int spaces;

	for (count = 0; count < n; count++)
	{
		for (spaces = 0; spaces < count; spaces++)
		{
			_putchar('');
		}
		_putchar('\\');
		if (count < (n -1 ))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

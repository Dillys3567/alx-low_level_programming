#include "main.h"
/**
 * print_numbers - print numbers
 */
void print_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		_putchar(ch + '0');
	}
	_putchar('\n');
}

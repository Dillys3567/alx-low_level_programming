#include "main.h"
/**
 * print_square - print square
 * @size: size of square
 */
void print_square(int size)
{
	int w, h;

	for (w = 0; w < size; w++)
	{
		for (h = 0; h < size; h++)
		{
			_putchar(35);
		}
		if (w != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

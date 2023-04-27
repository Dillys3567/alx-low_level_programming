#include "main.h"
/**
 * print_square - print square
 * @size: size of square
 */
void print_square(int size)
{
	int w;
	int h;

	if ((size == 0) || (size < 0))
	{
		_putchar('\n');
	}
	else
	{
		for (h == 0; h < size; h++)
		{
			for (w == 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

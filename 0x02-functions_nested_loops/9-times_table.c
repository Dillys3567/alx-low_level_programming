#include "main.h"
/**
 * times_table - multiplication
 */
void times_table(void)
{
	int num;
	int multi;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
			prod = num * multi;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

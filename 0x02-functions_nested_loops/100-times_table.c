#include "main.h"
/**
 * print_times_table - n times table
 * @n: start
 */
void print_times_table(int n)
{
	int multi;
	int num;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for  (multi = 0; multi <= n; multi++)
		{
			_putchar('0');
			for (num = 1; num <= n; num++)
			{
				prod = multi * num;
				_putchar(',');
				_putchar(' ');
				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod <= 99)
				{
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else
				{
					_putchar(((prod / 100) % 10) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

#include "main.h"
/**
 * times_table - multiplication
 */
void times_table(void)
{
	int num;
	int multi;
	int prod;
	int temp;

	for (num = 0; num <= 9; num++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			prod = num * multi;
			temp = prod / 10;
			if (temp != 0)
			{
				_putchar(temp + '0');
			}
			_putchar((prod % 10) + '0');
			if (multi == 9)
				_putchar('\n');
			else if(temp == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
		}
	}
}

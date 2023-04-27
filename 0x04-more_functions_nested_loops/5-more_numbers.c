#include "main.h"
/**
 * more_numbers - print 10 rows of numbers
 */
void more_numbers(void)
{
	int num;
	int count;
	int ten;
	int ones;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			ten = num / 10;
			ones = num % 10;
			if (ten != 0)
			{
				_putchar(ten + '0');
			}
			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}

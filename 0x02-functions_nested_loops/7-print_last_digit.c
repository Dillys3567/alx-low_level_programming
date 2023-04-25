#include "main.h"
/**
 * print_last_digit - last value of digit
 * @num: input number
 * Return: last digit
 */
int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}

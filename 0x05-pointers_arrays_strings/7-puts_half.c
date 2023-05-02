#include "main.h"
/**
 * puts_half - print 2nd half of string
 * @str: string variable
 */
void puts_half(char *str)
{
	int len = 0;
	int c = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (c % 2 != 0)
		c = ((len - 1) / 2) + 1;
	else
		c = len / 2;
	for (; c < len; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * puts2 - print alternate characters of string
 * @str: string
 */
void puts2(char *str)
{
	int len = 0;
	int c = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (c = 0; c < len; c++)
	{
		if (c % 2 != 0)
		{
			continue;
		}
		_putchar(str[c]);
	}
	_putchar('\n');
}

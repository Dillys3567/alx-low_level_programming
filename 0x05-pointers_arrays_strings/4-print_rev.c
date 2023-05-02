#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string pointer
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len != 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}


#include "main.h"
/**
 * _puts - print a string
 * @str: string value
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		s++;
	}
	_putchar('\n');
}

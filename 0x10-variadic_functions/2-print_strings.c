#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings followed by new line
 * @separator: separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	char *str;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ls, char*);
		if (str == NULL)
			str = "nil";
		printf("%s", str);
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

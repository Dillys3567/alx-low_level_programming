#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers follwoed by newline
 * @separator: string between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%d%s", va_arg(ls, int), separator);
		}
		else
		{
			printf("%d\n", va_arg(ls, int));
		}
	}
}

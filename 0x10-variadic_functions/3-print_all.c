#include <stdarg.h>
#include  <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print anything with variadic
 * @format: list of type of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ls;
	int i = 0;
	char *sep = "", *str;

	va_start(ls, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ls);
}

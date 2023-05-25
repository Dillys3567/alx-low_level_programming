#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to sum all args
 * @n: first argument
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ls;

	va_start(ls, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ls, int);
	}
	return (sum);
}

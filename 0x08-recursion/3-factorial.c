#include "main.h"
/**
 * factorial - return factorial
 * @n: number
 * Return: factoril
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

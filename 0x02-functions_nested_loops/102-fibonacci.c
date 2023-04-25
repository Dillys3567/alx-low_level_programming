#include <stdio.h>
/**
 * main - fibonnaci series
 * Return: Always 0
 */
int main(void)
{
	long int num1;
	long int num2;
	long int fib;
	long int nfib;

	num1 = 1;
	num2 = 2;
	fib = nfib = 0;
	while (fib <= 40000000)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if ((num1 % 2) == 0)
		{
			nfib += num1;
		}
	}
	printf("%ld\n", nfib);
	return (0);
}

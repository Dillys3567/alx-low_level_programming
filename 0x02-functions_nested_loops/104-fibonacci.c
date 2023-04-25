#include <stdio.h>
/**
 * main - first 100 fibonacci
 * Return: Always 0
 */
int main(void)
{
	int count, b, b2;
	long int num1, num2, fib, fib2, num11, num22;

	num1 = 1;
	num2 = 2;
	b = b2 = 1;
	printf("%ld, %ld", num1, num2);
	for (count = 0; count < 96; count++)
	{
		if (b)
		{
			fib = num1 + num2;
			printf(", %ld", fib);
			num1 = num2;
			num2 = fib;
		}
		else
		{
			if (b2)
			{
				num11 = num1 % 1000000000;
				num22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				b2 = 0;
			}
			fib2 = num11 + num22;
			fib = num1 + num2 + (fib2 / 1000000000);
			printf(", %ld", fib);
			printf("%ld", fib2 % 1000000000);
			num1 = num2;
			num11 = num22;
			num2 = fib;
			num22 = fib2 % 1000000000;
		}
		if (((num1 + num2) < 0) && b == 1)
			b = 0;
	}
	printf("\n");
	return (0);
}

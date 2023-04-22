#include <stdio.h>
/**
 * main - 2 digit combination
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	num3 = 1;
	for (num = 0 ; num <= 9 ; num++)
	{
		for (num2 = 1 ; num2 <= 9 ; num++)
		{
			putchar(num + '0');
			putchar(num2 + '0');
			putchar(',');
			putchar(' ');
		}
		num3 += 1;
		num2 = num3;

	}
	putchar('\n');
	return (0);
}

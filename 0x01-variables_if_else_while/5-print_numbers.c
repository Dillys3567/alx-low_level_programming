#include <stdio.h>
/**
 * main - print base 10 digits
 * Return: Always 0
 */
int main(void)
{
	char num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

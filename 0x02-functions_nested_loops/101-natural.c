#include "main.h"
#include <stdio.h>
/**
 * main - natural numbers
 * Return: Always 0
 */
int main(void)
{
	int num;
	int sum;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
}	

#include <stdio.h>
/**
 * main - 2 digit combination
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;

	for (num = '0' ; num < '9' ; num++)
	{
		for (num2 = num + 1 ; num2 <= '9' ; num2++)
		{
			if (num != num2)
			{
				putchar(num);
				putchar(num2);
				if (num == '8' && num2 == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}

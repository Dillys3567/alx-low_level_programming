#include <stdio.h>
/**
 * main - combination of 3 digits
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = '0' ; num < '9' ; num ++)
	{
		for (num2 = num + 1 ; num2 <= '9' ; num2 ++)
		{
			for (num3 = num2 + 1 ; num3 <= '9' ; num3++)
			{
				if ((num2 != num) != num3)
				{
					putchar(num);
					putchar(num2);
					putchar(num3);
					if (num == '7' && num2 == '8')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

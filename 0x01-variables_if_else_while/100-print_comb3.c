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
	int num4;

	num3 = 1;
	num4 = 0;
	for (num = num4 ; num <= 9 ; num++)
	{
		for (num2 = num3 ; num2 <= 9 ; num++)
		{
			putchar(num + '0');
			putchar(num2 + '0');
			if (num == 8 && num2 == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			num3+=1;
		}
		num4+=1;

	}
	putchar('\n');
	return (0);
}

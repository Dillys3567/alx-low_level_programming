#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n: start number
 */
void print_to_98(int n)
{
	int num;

	num = n;
	if (num < 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			else
			{
				printf("%d ", num);
			}
		}
	}
	else
	{
		for (num = n; num >= 98; num--)
		{
			if (num != 98)
			{
				printf("%d, ",num);
			}
			else
			{
				printf("%d ",num);
			}
		}
	}
}

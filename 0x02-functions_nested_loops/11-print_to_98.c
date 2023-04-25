#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * @n: start number
 */
void print_to_98(int n)
{
	int count;

	for (count = n; count <= 98; count++)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
}

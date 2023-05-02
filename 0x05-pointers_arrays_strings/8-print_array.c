#include "main.h"
#include <stdio.h>
/**
 * print_array - ptint a number of array elements
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int len = 0;
	int c = 0;

	while (a[len] != '\0')
	{
		len++;
	}

	for (; c < n; c++)
	{
		if (c == n - 1)
			continue;
		printf("%d, ", a[c]);
	}
	if (!(n <= 0))
		printf("%d\n", a[n - 1]);
	else
		putchar('\n');
}

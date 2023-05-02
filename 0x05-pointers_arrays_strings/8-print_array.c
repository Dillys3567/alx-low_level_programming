#include "main.h"
/**
 * print_array - ptint a number of array elements
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int len = 0;
	int c = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (; c < n; c++)
	{
		if (c == n - 1)
			continue;
		printf("%d, ", s[c]);
	}
	printf("%d\n", s[n - 1]);
}

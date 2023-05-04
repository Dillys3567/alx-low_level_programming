#include "main.h"
/**
 * *leet - encode string
 * @n: string
 * Return: pointer
 */
char *leet(char *n)
{
	int x, y;

	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == arr1[y])
			{
				n[x] = arr2[y];
			}
		}
	}
	return (n);
}

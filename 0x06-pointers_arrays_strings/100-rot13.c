#include "main.h"
/**
 * *rot13 - rot13
 * @n: array
 * Return: array
 */
char *rot13(char *n)
{
	int x, y;
	char lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lettrot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (n[x] == lett[y])
			{
				n[x] = lettrot13[y];
				break;
			}
		}
	}
	return (n);
}

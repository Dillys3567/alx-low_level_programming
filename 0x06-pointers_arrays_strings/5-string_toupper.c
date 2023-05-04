#include "main.h"
/**
 * *string_toupper - string to uppercase
 * @n: input
 * Return: array
 */
char *string_toupper(char *n)
{
	int len = 0;

	while (n[len] != '\0')
	{
		if (n[len] >= 'a' && n[len] <= 'z')
			n[i] -= 32;
		len++;
	}
	return (n);
}

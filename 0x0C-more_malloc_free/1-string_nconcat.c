#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	unsigned int i, j, len, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n < len2)
	{
		b = malloc(sizeof(char) * (len1 + n + 1));
		len = len1 + n + 1;
		j = n;
	}
	else
	{
		b = malloc(sizeof(char) * (len1 + len2 + 1));
		len = len1 + len2 + 1;
		j = len2;
	}
	if (b == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		b[i] = s1[i];
	for (i = 0; i < j; i++)
		b[len1 + i] = s2[i];
	b[len] = '\0';
	return (b);
}

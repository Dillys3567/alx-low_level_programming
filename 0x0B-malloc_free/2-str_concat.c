#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	b = (char *)malloc((len1 + len2) * sizeof(char) + 1);
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len1; i++)
	{
		b[i] = s1[i];
	}
	for (i = 0; i < len2 + 1; i++)
	{
		b[len1 + i] = s2[i];
	}
	return (b);
}

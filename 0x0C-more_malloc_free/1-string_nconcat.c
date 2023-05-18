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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n < len2)
		b = malloc(sizeof(char) * (len1 + n + 1));
	else
		b = malloc(sizeof(char) * (len1 + len2 + 1));
	if (b == NULL)
		return (NULL);
	while (i < len1)
	{
		b[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + 1))
		b[i++] = s2[j++];
	while (n >= len2 && i < (len1 +len2))
		b[i++] = s2[j++];
	b[i] = '\0';
	return (b);
}

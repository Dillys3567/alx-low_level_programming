#include "main.h"
/**
 * char *_strcat - concatenate 2 strings
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i, j;

	len1 = len2 = i =  0;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		len2++;
		i++;
	}

	for (i = 0; i <= len2; i++)
	{
		for (j = len1; j <= (len1 + len2); j++)
		{	
			dest[] = src[i];
		}
	}
	dest[(len1 - 1 + len2)];
}

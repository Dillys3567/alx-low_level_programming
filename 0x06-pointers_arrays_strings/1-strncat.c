#include "main.h"
/**
 * *_strncat - concatenate part of string with another string
 * @dest: destination
 * @src: source
 * @n: number of chars
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while ( len2 < n && src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	return (dest);
}

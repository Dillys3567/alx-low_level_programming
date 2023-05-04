#include "main.h"
/**
 * *_strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: number of characters
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while ((len < n) && (src[len] != '\0'))
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}

#include "main.h"
/**
 * *_strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: returns destination
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int c = 0;

	while (src[len] != '\0')
		len++;

	len++;
	for (; c < len; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}

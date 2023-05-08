#include "main.h"
/**
 * *_memcpy - copy from 1 memory area to another
 * @dest: destination
 * @src: source
 * @n: number or bytes
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

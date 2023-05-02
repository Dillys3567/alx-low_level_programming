#include "main.h"
/**
 * _strlen - check string length
 * @s: string to be checked
 * Return: an int value of the length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

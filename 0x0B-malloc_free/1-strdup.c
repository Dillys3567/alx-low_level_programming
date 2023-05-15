#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - copy string with malloc
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *b;
	int i, len = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	b = (char *)malloc(len * sizeof(char) + 1);
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len ; i++)
	{
		b[i] = str[i];
	}
	return (b);
}

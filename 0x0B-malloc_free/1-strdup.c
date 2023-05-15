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

	if (str == NULL)
	{
		return (0);
	}
	b = (char *)malloc(sizeof(str));
	if (b == NULL)
	{
		return (0);
	}
	b = str;
	return (b);
}

#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: string pointer
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

#include "main.h"
/**
 * *_strchr - match character
 * @s: string pointer
 * @c: character
 * Return: string pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);

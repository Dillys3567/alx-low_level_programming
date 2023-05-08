#include "main.h"
/**
 * *_strchr - match character
 * @s: string pointer
 * @c: character
 * Return: string pointer
 */
char *_strchr(char *s, char c)
{
	int len = 0;

	for (; s[len] >= '\0'; len++)
	{
		if (s[len] == c)
			return (&s[len]);
	}
	return (0);
}

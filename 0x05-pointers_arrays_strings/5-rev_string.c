#include "main.h"
/**
 * rev_string - reverse a string
 * @s: array
 */
void rev_string(char *s)
{
	int len;
	int c;
	char ch;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (c = 0;c < len; c++)
	{
		len--;
		ch = s[c];
		s[c] = s[len];
		s[len] = ch;
	}
}

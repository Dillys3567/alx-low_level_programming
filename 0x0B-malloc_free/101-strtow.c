#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * count - count words
 * @s: string
 * Return: number of words
 */
int count(char *s)
{
	int flag = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - split string into words
 * @str: string
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **b, *p;
	int i, k = 0, len = 0, words = 0, c = 0, start, end;

	len = strlen(str);
	words = count(str);
	if (words == 0)
	{
		return (0);
	}
	b = (char **)malloc((words + 1) * sizeof(char *));
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				p = (char *)malloc(sizeof(char) * (c + 1));
				if (p == NULL)
				{
					return (0);
				}
				while (start < end)
					*p++ = str[start++];
				*p = '\0';
				b[k] = p - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	b[k] = NULL;
	return (b);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * **strtow - string from substrings space separated
 * @str: string
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **b, *p = str, *word_start = str;
	int i, word_count = 0, in_word = 0, current_word = 0;
	int word_length;

	if (str == NULL || str == "")
	{
		return (0);
	}
	while (*p != '\0')
	{
		if (*p == ' ')
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		p++;
	}
	b = (char **)malloc((word_count + 1) * sizeof(char *));
	if (b == NULL)
	{
		return (0);
	}
	in_word = 0;
	p = str;
	while (*p != '\0')
	{
		if (*p == ' ')
		{
			if (in_word == 1)
			{
				in_word = 0;
				word_length = p - word_start;
				b[current_word] = (char *)malloc((word_length + 1) * sizeof(char));
				if (b[current_word] == NULL)
				{
					for (i = 0; i < current_word; i++)
					{
						free(b[i]);
					}
					free(b);
					return (0);
				}
				strncpy(b[current_word], word_start, word_length);
				b[current_word][word_length} = '\0';
				current_word++;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			word_start =  p;
		}
		p++;
	}
	if (in_word == 1)
	{
		word_length = p - word_start;
		b[current_word] = (char *)malloc((word_lenght + 1) * sizeof(char));
		if (b[current_word] == NULL)
		{
			for (i = 0; i < current_word; i++)
			{
				free(b[i]);
			}
			free(b);
			return (0);
		}
		strcpy(b[current_word], word_start, word_length);
		b[current_word][word_length] = '\0';
		current_word++;
	}
	b[current_word] = NULL;
	return (b);
}

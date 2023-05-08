#include "main.h"
/**
 * int _strspn - get length of string
 * @s: string
 * @accept: substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int n = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[len] == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		len++;
	}
	return (n);
}

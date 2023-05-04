#include "main.h"
/**
 * *cap_string - capitalize
 * @n: string
 * Return: pointer
 */
char *cap_string(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		while (!(n[x] >= 'a' && n[x] <= 'z'))
			x++;
		if (n[x - 1] == ' ' ||
		n[x - 1] == '\t' ||
		n[x - 1] == '\n' ||
		n[x - 1] == ',' ||
		n[x - 1] == ';' ||
		n[x - 1] == '.' || n[x - 1] == '!' ||
		n[x - 1] == '?' || n[x - 1] == '"' || n[x - 1] == '(' ||
		n[x - 1] == ')' || n[x - 1] == '{' || n[x - 1] == '}' || x == 0)
			n[x] -= 32;
		x++;
	}
	return (n);
}

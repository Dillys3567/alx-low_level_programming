#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - concatenate int and string
 * @ac: int
 * @av: string
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0;
	char *b;
	unsigned int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	b = (char *)malloc((len + 1) * sizeof(char));
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		b[j] = *av[i];
		j += strlen(*av[i]);
		b[j] = '\n';
		j++;
	}
	b[len] = '\0';
	return (b);
}

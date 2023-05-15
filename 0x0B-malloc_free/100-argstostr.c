#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenate int and string
 * @ac: int
 * @av: string
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *b;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}
	b = (char *)malloc(ac * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		b[i] = av[i] + '\n';
	}
	return (b);
}

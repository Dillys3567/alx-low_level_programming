#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * checker - check for digits
 * @str: character
 * Return: 0 or 1
 */
int checker(char *str)
{
	unsigned int x = 0;

	while (x < strlen(str))
	{
		if (!isdigit(str[x]))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/**
 * main - entry
 * @argc: count of arguments
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, value;
	int sum = 0;

	i = 1;

	while (i < argc)
	{
		if (checker(argv[i]))
		{
			value = atoi(argv[i]);
			sum += value;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

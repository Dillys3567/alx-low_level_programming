#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: count of arguments
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int m, i, res;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(argv[1]);
		res = 0;
		if (m < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5 && m >= 0; i++)
		{
			while (m >= coins[i])
			{
				res++;
				m -= coins[i];
			}
		}
		printf("%d\n", res);
		return (0);
	}
}

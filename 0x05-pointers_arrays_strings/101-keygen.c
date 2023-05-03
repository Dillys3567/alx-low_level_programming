#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate password
 * Return: 0
 */
int main(void)
{
	int password[100];
	int x, tot, n;

	tot = 0;
	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		password[x] = rand() % 78;
		tot += password[x] + '0';
		putchar(password[x] + '0');
		if ((2772 - tot) - '0' < 78)
		{
			n = 2772 - tot - '0';
			tot += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

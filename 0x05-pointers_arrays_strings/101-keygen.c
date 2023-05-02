#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate password
 * Return: 0
 */
int main(void)
{
	int rand, x;

	rand = x = 0;
	time_t t;
	srand((unsigned int) time(&t));
	while (x < 4472)
	{
		r = rand() % 128;
		if ((x + rand) > 4472)
			break;
	}
	printf("%c\n", (4472 - x));
	return (0);
}

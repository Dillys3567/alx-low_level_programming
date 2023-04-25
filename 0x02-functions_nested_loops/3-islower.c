#include "main.h"
/**
 * _islower - checks for lowercase
 * Return:  1  if lower and 0 otherwise
 */
int _islower(int c)
{
	int ch;

	ch = c;
	if (ch >= 97 && ch <=122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

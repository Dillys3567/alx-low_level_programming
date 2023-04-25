#include "main.h"
/**
 * _isalpha - check for alphanumeric
 * @c: charcater
 * Return: 1 if alphanumeric and 0 otherwise
 */
int _isalpha(int c)
{
	int ch;

	ch = c;
	if ((ch >= 0 && ch <= 9) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * _atoi - string to integer
 * @s: string
 * Return: int value
 */
int _atoi(char *s)
{
	int x, y, n, len, f, dig;

	x = y = n = len = f = dig = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			dig = s[x] - '0';
			if (y % 2)
				dig = -dig;
			n = n * 10 + dig;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

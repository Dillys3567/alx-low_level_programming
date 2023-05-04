#include "main.h"
/**
 * rev - reverse array
 * @n: int
 * Return: 0
 */
void rev(char *n)
{
	int x = 0;
	int y = 0;
	char t;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;
	for (y = 0; y < x; y++, x--)
	{
		t = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = temp;
	}
}

 /**
 * *infinite_add - add 2 numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: array pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over, x, y, digit, val, val2, temp;

	over = x = y = digit = val = val2 = temp = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	while (y >= 0 || x >= 0 || over == 1)
	{
		if (x < 0)
			val = 0;
		else
			val = *(n1 + x) - '0';
		if (y < 0)
			val2 = 0;
		else
			val2 = *(n2 + y) - '0';
		temp = val + val2 + over;
		if (temp >= 10)
			over = 1;
		else
			over = 0;
		if (digit >= (size_r - 1))
			return (0);
		*(r + digit) = (temp % 10) + '0';
		digit++;
		x--;
		y--;
	}
	if (digit == size_r)
		return (0);
	*(r + digit) = '\0';
	rev(r);
	return (r);
}

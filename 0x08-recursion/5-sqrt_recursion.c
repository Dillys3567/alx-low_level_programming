#include "main.h"
/**
 * sqrts - guess root
 * @num: number
 * @guess: guess
 * Return: square root
 */
int sqrts(int num, int guess)
{
	int new = (guess + num / guess) / 2;

	if (new == guess)
	{
		return (guess);
	}
	else
	{
		return (sqrts(num, new));
	}
}
/**
 * _sqrt_recursion - find square root
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
		return (sqrts(n, 1));
}

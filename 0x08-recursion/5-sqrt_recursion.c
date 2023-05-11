#include "main.h"
/**
 * sqrt - guess root
 * @num: number
 * @guess: guess
 * Return: square root
 */
int sqrt(int num, int guess)
{
	int new = (guess + num / guess) / 2;

	if (new == guess)
	{
		return (guess);
	}
	else
	{
		return (sqrt(num, new));
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

	else
		return (sqrt(n, 1));
}

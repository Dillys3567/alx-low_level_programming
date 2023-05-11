#include "main.h"
/**
 * primes - check prime
 * @num: number
 * @divisor: divisor
 * Return: result
 */
int primes(int num, int divisor)
{
	if (num <= 2)
	{
		return (num == 2);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (num % divisor == 0)
	{
		return (0);
	}
	return (primes(num, divisor - 1));
}

/**
 * is_prime_number - prime number
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (primes(n, n / 2));
}

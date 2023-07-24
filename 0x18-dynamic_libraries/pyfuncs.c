#include "pyfuncs.h"
/**
 * add - add
 * @a: a
 * @b: b
 * Return: result of add
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - sub
 * @a: a
 * @b: b
 * Return: result of sub
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiply
 * @a: a
 * @b: b
 * Return: a * b
 */
int mul(int a, int b)
{
	int c = a * b;

	return (c);
}
/**
 * div - divide
 * @a: a
 * @b: b
 * Return: result of div
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - modulus
 * @a: a
 * @b: b
 * Return: result of mod
 */
int mod(int a, int b)
{
	return (a % b);
}

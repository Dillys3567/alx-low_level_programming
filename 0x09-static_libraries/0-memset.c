#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * *_memset - set value in memory
 * @s: destination
 * @b: source
 * @n: location
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

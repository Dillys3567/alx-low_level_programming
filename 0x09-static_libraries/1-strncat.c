#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - concatenate
 * @src: source
 * @dest: destination
 * @n: number of characters
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

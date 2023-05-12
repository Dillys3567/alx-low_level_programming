#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * *_strncpy - copy string part
 * @dest: destination
 * @src: source
 * @n: number of characters
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

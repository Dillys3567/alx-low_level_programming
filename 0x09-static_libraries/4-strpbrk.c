#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - break
 * @s: string
 * @accept: string2
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

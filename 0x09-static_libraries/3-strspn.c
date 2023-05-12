#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - string span
 * @s: string
 * @accept: string 2
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

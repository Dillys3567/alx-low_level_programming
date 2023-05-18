#include <stdlib.h>
#include "main.h"
/**
 * *_mset - fill memory
 * @s: array
 * @b: character
 * @n: size
 * Return: array pointer
 */
char *_mset(char *s, char b, unsigned int n)
{
        unsigned int i;
        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }
        return (s);
}
/**
 * *_calloc - allocate memory and fill
 * @nmemb: num of elements
 * @size: size of element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *b;
        if (nmemb == 0 || size == 0)
                return (NULL);
        b = malloc(size * nmemb);
        if (b == NULL)
                return (NULL);
        _mset(b, 0, nmemb * size);
        return (b);
}

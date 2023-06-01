#include "lists.h"
#include <stdio.h>
/**
 * print_list - return number of nodes
 * @h: list struct
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t numb = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		numb++;
	}
	return (numb);
}

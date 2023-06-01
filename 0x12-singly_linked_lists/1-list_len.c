#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - get number of elements
 * @h: linked lists pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}

#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print elemments in list
 * @h: pointer to first
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}

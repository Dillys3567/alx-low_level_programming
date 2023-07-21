#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *t;

	t = h;
	while(t)
	{
		printf("%d\n", t->n);
		t = t->next;
		n++;
	}
	return (n);
}

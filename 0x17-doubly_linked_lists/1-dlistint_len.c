#include "lists.h"
/**
 * dlistint_t - get list length
 * @h: head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *t;

	t = h;
	while(t)
	{
		t = t->next;
		n++;
	}
	return (n);
}

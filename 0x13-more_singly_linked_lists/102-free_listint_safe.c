#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - free list
 * @h: head
 * Return: size of free list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)-next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h == NULL;
	return (num);
}

#include "lists.h"
/**
 * find_listint_loop - find loop
 * @head: head
 * Return: pointer
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head, *h = head;

	if (head == NULL)
		return (NULL);
	while (t && h && h->next)
	{
		h = h->next->next;
		t = t->next;
		if (h == t)
		{
			t = head;
			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (h);
		}
	}
	return (NULL);
}

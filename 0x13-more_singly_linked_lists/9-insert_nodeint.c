#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index
 * @head: head
 * @idx: index
 * @n: node value
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *t = *head;
	unsigned int c = 0;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL && idx != 0)
	       return (NULL);
	while (t && c < idx)
	{
		t = t->next;
		c++;
	}
	new->next = t->next;
	t->next = new;
	return (new ? new : NULL);
}

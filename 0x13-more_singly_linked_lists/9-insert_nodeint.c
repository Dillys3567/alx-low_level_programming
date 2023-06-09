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
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; t && c < idx; c++)
	{
		if (c == idx - 1)
		{
			new->next = t->next;
			t->next = new;
			return (new);
		}
		else
			t = t->next;
	}
	return (NULL);
}

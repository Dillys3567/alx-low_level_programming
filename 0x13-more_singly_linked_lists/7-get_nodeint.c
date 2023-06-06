#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: head
 * @index: the index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head;
	unsigned int c = 0;

	if (t)
		return (NULL);
	for (; c < index; c++)
	{
		t = t->next;
	}
	return (t ? t : NULL);
}

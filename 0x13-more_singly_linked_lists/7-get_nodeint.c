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
	unsigned int c;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (c = 1; c <= index; c++)
	{
		t = t->next;
	}
	return (t ? t : NULL);

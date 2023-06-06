#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - remove head
 * @head: pointer
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *t;

	if (head == NULL)
		return (0);
	val = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (val);
}

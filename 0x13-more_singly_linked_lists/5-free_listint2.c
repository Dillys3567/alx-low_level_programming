#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *t = *head;

	while (*head != NULL)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}

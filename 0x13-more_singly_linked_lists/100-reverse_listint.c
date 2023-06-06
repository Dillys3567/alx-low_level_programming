#include "lists.h"
/**
 * reverse_listint - reverse list
 * @head: head
 * Return: new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nend = NULL, *nstart = NULL;

	while (*head != NULL)
	{
		nstart = (*head)->next;
		(*head)->next = nend;
		nend = *head;
		*head = nstart;
	}
	*head = nend;
	return (*head);
}

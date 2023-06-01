#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node at end
 * @head: head of list
 * @str: string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *t = *head;
	unsigned int length = 0;

	while (str[length])
		length++;
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = length;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (t->next != NULL)
		t = t->next;
	t->next = new;
	return (new);
}


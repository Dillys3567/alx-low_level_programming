#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_list - free linked list
 * @head: first element;
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}

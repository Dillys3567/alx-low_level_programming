#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_node - add a new node to head
 * @head: pointer to pointer of head
 * @str: string
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	while (str[length])
		length++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

#include <stdio.h>
#include "lists.h"
/**
 * looped - count unique nodes
 * @head: head
 * Return: 0 if not looped else number of unique nodes
 */
size_t looped(const listint_t *head)
{
	const listint_t *s, *f;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	s = head->next;
	f = (head->next)->next;
	while (f)
	{
		if (s == f)
		{
			s = head;
			while (s != f)
			{
				nodes++;
				s = s->next;
				f = f->next;
			}
			s = s->next;
			while (s != f)
			{
				nodes++;
				s = s->next;
			}
			return (nodes);
		}
		s = s->next;
		f = (f->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - print list
 * @head: head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0, i = 0;

	num = looped(head);
	if (num == 0)
	{
		for (; head != NULL; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (; i < num; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (num);
}

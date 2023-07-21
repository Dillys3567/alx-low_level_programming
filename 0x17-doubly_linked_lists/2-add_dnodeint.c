#include "lists.h"
/**
 * create_node - create node
 * @n: data for node
 * Return: pointer to node
 */
dlistint_t *create_node(const int n)
{
	dlistint_t  *n = NULL;
	n = malloc(sizeof(

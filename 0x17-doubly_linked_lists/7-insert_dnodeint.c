#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - functionget node at index
 *
 * @h: pointer to list
 *
 * @idx: index of node
 *
 * @n: new value
 *
 * Return: node
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *c = *h;

	if (!h)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*h)
		*h = new;
	else
	{
		for (i = 0; i < idx && cur; i++)
			cur = cur->next;
		new->prev = cur->prev;
		cur->prev = new;
		new->next = cur;
	}
	return (new);
}

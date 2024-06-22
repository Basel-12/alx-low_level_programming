#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at end list
 *
 * @head: pointer to list
 *
 * @n: new value
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *cur = *head;

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*head)
		*head = new;
	else
	{
		(*head)->next = new;
		new->prev = *head;
	}
	return (new);
}

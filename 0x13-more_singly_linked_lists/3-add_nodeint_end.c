#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function
 *
 * @head: pointer to pointer to first node of list
 *
 * @n:  value
 *
 * Description: function to add node to end of list.
 *
 * Return: reference to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *cur = *head;

	if (!*head || !new)
		return (NULL);
	new->n = n;
	if (!*head)
		*head = new;
	else
	{
		while (cur->next)
			cur = cur->next;
		new->next = cur->next;
		cur->next = new;
	}
	return (new);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function
 *
 * @head: pointer to pointer to first node of list
 *
 * @n:  value
 *
 * @idx: index where node inserted
 *
 * Description: function to add node to end of list.
 *
 * Return: reference to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *cur = *head;
	unsigned int i;

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!cur)
				return (NULL);
			cur = cur->next;
		}
		new->next = cur->next;
		cur->next = new;
	}
	return (new);
}

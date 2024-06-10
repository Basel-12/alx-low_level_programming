#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function
 *
 * @head: pointer to pointer to first node of list
 *
 *
 * @index: index where node inserted
 *
 * Description: function to add node to end of list.
 *
 * Return: reference to new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head, *del;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = del->next;
		free(del);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (!cur)
				return (-1);
			cur = cur->next;
		}
		del = cur->next;
		cur->next = del->next;
		free(del);
	}
	return (1);
}

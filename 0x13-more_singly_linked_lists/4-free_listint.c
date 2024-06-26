#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function
 *
 * @head: pointer to first node of list
 *
 * Description: function to add node to end of list.
 *
 * Return: number of nodes
 */

void free_listint(listint_t *head)
{
	listint_t *cur = head;

	if (!head)
		return;
	while (head)
	{
		head = head->next;
		free(cur);
		cur = head;
	}
}

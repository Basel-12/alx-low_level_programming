#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function
 *
 * @head: pointer to first node of list
 *
 * Description: function to add node to end of list.
 *
 * Return: number of nodes
 */

void free_listint2(listint_t **head)
{
	listint_t *cur, *temp;

	if (!head)
		return;
	cur = *head;
	while (cur)
	{
		temp = cur;
		cur = cur->next;
		free(temp);
		cur = *head;
	}
	*head = NULL;
}

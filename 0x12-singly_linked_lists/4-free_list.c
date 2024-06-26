#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function
 *
 * @head: pointer to first node of list
 *
 * Description: function to add node to end of list.
 *
 * Return: number of nodes
 */

void free_list(list_t *head)
{
	list_t *cur;

	if (!head)
		return;
	while (head)
	{
		cur = head;
		free(cur->str);
		free(cur);
		head = head->next;
	}
}

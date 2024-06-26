#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function
 *
 * @head: pointer to first node of list
 *
 * @index: index we need
 *
 * Description: function to add node to end of list.
 *
 * Return: number of nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*listint_t *cur = head;*/
	int i;

	if (!head)
		return (NULL);
	for (i = 0; i < (int)index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}

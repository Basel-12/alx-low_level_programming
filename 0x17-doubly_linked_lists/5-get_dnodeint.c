#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - functionget node at index
 *
 * @head: pointer to list
 *
 * @index: index of node
 *
 * Return: node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}

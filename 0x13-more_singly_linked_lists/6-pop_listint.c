#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function
 *
 * @head: pointer to first node of list
 *
 * Description: function to add node to end of list.
 *
 * Return: number of nodes
 */

int pop_listint(listint_t **head)
{
	listint_t *cur = *head;
	int num;

	if (!head || !*head)
		return (0);
	*head = (*head)->next;
	num = cur->n;
	free(cur);
	return (num);
}

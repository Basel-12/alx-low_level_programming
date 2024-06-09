#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function
 *
 * @head: pointer to pointer to first node of list
 *
 * @n: int value
 *
 * Description: function to count number of nodes
 *
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function
 *
 * @head: pointer to pointer to first node of list
 *
 * @str: string value
 *
 * Description: function to add node to end of list.
 *
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	list_t *cur = *head;

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = (unsigned int)strlen(str);
	}
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

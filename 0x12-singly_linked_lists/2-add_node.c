#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function
 *
 * @head: pointer to pointer to first node of list
 *
 * @str: string value
 *
 * Description: function to count number of nodes
 *
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

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
	new->next = *head;
	*head = new;
	return (new);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function
 *
 * @h: pointer to first node of list
 *
 * Description: function to count number of nodes
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h);
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

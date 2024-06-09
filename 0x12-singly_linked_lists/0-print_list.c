#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function
 *
 * @h: pointer to first node of list
 *
 * Description: function to print list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num);
}

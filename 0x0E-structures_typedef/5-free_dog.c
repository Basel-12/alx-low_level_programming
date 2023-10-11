#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - function that print struct elements
 *
 * @d: pointer to struct
 *
 * Return: void
 */
void free_dog(struct dog *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "dog.h"


/**
 * free_dog - function
 *
 * @d: struct
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
	free(d);
	}
}

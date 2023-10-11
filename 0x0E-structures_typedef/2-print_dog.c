#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - function that print struct elements
 *
 * @d: pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			d->name = "(nil)";
		if (!d->age)
			d->age = 0;
		if (!d->owner)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
	}
}

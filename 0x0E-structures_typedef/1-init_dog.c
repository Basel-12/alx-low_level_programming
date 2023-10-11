#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - function that intialize struct element with given parameters
 *
 * @d: pointer to struct
 *
 * @name: pointer to dog name
 *
 * @age: dog's age
 *
 * @owner: owner name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

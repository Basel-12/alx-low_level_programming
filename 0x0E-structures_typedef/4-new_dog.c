#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - function that intialize struct element with given parameters
 *
 *
 * @name: pointer to dog name
 *
 * @age: dog's age
 *
 * @owner: owner name
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);
	d = (dog_t *)malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

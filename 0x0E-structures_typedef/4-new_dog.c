#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "dog.h"


/**
 * new_dog - function
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

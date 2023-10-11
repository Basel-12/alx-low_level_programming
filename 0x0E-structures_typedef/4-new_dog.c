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
	int len1 = 0, len2 = 0, i = 0;

	if (!name || age < 0 || !owner)
		return (NULL);
	d = (dog_t *)malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	for (len1 = 0; name[len1]; len1++)
		;
	d->name = (dog_t *)malloc(sizeof(char) * len1 + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	for (len2 = 0; owner[len2]; len2++)
		;
	d->owner = (dog_t *) malloc(sizeof(char) * len2 + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	for (i = 0; name[i]; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	for (i = 0; owner[i]; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	return (d);
}

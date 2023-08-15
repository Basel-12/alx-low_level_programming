#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "dog.h"

/**
 * _strcpy - copy string to string
 *
 *@s: pointer to the output string
 *
 *@c: pointer to the string we need to copy
 *
 * Return: pointer
*/
char *_strcpy(char *s, char *c)
{
	int i = 0;

	for (i = 0; c[i]; i++)
	{
		s[i] = c[i];
	}
	s[i] = '\0';
	return (s);
}
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
	d->name = (char *)malloc(sizeof(char) * strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = (char *)malloc(sizeof(char) * strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}

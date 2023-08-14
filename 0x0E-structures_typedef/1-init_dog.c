#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "dog.h"


/**
 * init_dog - function
 *
 * @d: struct
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
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

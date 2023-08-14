#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "dog.h"


/**
 * print_dog - function
 *
 * @d: struct
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		printf("Name: %s\nAge: %.6f\nOwner: %s", d->name, d->age, d->owner);
	}
}

#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * struct dog  - dog struct
 *
 * @name: name
 * @age: age
 * @owner: owner of the dog
 *
 * Description: A C progrmam uses puts function
 *
 * Return: Always 0 (Success)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

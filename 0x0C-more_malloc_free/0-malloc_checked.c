#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * malloc_checked - function
 *
 * @b: size of an array
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == 0)
		exit(98);
	return (s);
}

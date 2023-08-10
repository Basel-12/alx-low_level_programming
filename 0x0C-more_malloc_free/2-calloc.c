#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"
#include <string.h>


/**
 * _calloc - function
 *
 * @nmemb: size of an array
 *
 * @size: input char
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == 0)
		return (NULL);
	memset(m, 0, size * nmemb);
	return (m);
}

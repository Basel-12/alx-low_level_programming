#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * create_array - function
 *
 * @size: size of an array
 *
 * @c: input char
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *create_array(unsigned int size, char c)
{
	char *s = (char *)malloc(sizeof(char) * size);

	if (size == 0 || s == 0)
		return (NULL);
	while (size--)
	{
		s[size] = c;
	}
	return (s);
}

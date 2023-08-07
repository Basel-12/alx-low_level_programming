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
	if (size == 0 || s == 0)
		return (NULL);
	char *s = (char *)malloc(sizeof(char) * size);
	unsigned int i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

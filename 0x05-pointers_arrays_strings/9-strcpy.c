#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strcpy- function
 *
 * @dest: pointer of an integer
 *
 * @src: pointer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
		dest[i] = src[i];
	return (dest);
}

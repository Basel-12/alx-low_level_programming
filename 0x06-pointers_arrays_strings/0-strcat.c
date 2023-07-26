#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strcat- function
 *
 * @dest: pointer of an integer
 *
 * @src: pointer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
		i++;
	for (j = 0; src[j] ; ++j)
		dest[i++] = src[j];
	return (dest);
}

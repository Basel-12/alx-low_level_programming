#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strcpy - function
 *
 * @dest: pointer of an integer
 *
 * @src: input
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	return (dest);
}

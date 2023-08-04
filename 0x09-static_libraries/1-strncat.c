#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strncat - function
 *
 * @dest: pointer of an integer
 *
 * @src: pointer
 *
 * @n: input
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;
while (dest[i])
i++;
for (j = 0; j < n && src[j] != '\0' ; ++j)
	dest[i++] = src[j];
dest[i] = '\0';
return (dest);
}

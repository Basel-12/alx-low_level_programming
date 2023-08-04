#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strncpy  - function
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
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; ++i)
	dest[i] = src[i];
while (i < n)
{
	dest[i] = '\0';
	i++;
}
return (dest);
}

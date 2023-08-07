#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strdup - function
 *
 * @str: size of an array
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *_strdup(char *str)
{
	int i, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; ++i)
		++size;
	m = (char *)malloc(sizeof(char) * size + 1);

	if (m == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; ++i)
		m[i] = str[i];
	return (m);
}

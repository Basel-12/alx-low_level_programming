#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * str_concat - function
 *
 * @s1: size of an array
 *
 * @s2: input char
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, size1 = 0, size2 = 0;
	char *m;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	for (i = 0; s1[i] != '\0'; ++i)
		++size1;
	for (i = 0; s2[i] != '\0'; ++i)
		++size2;
	m = (char *)malloc(sizeof(char) * (size1 + size2)  + 1);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}

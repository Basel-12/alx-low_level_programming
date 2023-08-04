#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strchr - function
 *
 * @s: pointer of an integer
 *
 * @c: pointer
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *_strchr(char *s, char c)
{
	 int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

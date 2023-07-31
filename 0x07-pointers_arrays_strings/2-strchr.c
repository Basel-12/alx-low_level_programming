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
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
}

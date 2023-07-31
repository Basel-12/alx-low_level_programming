#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strspn - function
 *
 * @s: pointer of an integer
 *
 * @accept: pointer
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0' ; ++i)
	{
		for (j = 0; accept[j] != s[i] ; ++j)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

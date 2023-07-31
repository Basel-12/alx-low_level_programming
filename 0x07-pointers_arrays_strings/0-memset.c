#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _memset - function
 *
 * @s: pointer of an integer
 *
 * @b: pointer
 *
 * @n: size
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n ; ++i)
	{
		s[i] = b;
	}
	return (s);
}

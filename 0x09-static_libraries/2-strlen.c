#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strlen - function
 *
 * @s: pointer of an integer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

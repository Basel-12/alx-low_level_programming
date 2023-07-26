#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strcmp - function
 *
 * @s1: pointer of an integer
 *
 * @s2: pointer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
int _strcmp(char *s1, char *s2)
{
while (*s1)
{
if (*s1 != *s2)
	break;
	s1++;
	s2++;
}
return ((int) *s1 - (int) *s2);
}

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _strlen_recursion - function
 *
 * @s: pointer of an integer
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

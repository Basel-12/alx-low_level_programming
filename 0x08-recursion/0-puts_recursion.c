#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _puts_recursion - function
 *
 * @s: pointer of an integer
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}

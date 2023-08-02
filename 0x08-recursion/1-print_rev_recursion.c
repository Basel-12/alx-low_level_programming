#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _print_rev_recursion - function
 *
 * @s: pointer of an integer
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

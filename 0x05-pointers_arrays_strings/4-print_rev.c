#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_rev - function
 *
 * @s: pointer of an integer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

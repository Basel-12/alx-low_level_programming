#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _puts - function
 *
 * @str: pointer of an integer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

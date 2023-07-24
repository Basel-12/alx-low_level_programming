#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * puts2 - function
 *
 * @str: pointer of an integer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

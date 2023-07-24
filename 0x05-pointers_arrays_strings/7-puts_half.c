#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * puts_half - function
 *
 * @str: pointer of an integer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	i++;
	for (i /= 2; str[i] != '\0'; ++i)
		_putchar(str[i]);
	_putchar('\n');
}

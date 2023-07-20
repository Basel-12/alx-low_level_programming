#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_numbers - function to check if character lowercase
 *
 * Return: void
 *
*/
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		_putchar(c);

	_putchar('\n');
}

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_line - function to check if character lowercase
 *
 * @n: function input
 *
 * Return: void
 *
*/
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
		_putchar('_');

	_putchar('\n');
}

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_to_98 - print the time table
 *
 * @n: function input
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
{
	for (i = n; i >= 98; i--)
{
	if (i > 9)
{
	_putchar(i / 10 + '0');
}
	else
		_putchar(i % 10 + '0');
	_putchar(',');
	_putchar(' ');
}
	_putchar('\n');
}
else
{
	for (i = n; i <= 98; i++)
{
	if (i > 9)
{
	_putchar(i / 10 + '0');
}
	else
		_putchar(i % 10 + '0');
	_putchar(',');
	_putchar(' ');
}
	_putchar('\n');
}
}

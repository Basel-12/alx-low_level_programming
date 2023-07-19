#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_times_table - print the time table
 *
 * @n: function input
 */
void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; hh++)
{
	_putchar(48);
	for (i = 1; mm <= 3; mm++)
{
		_putchar(',');
		_putchar(' ');
		res = hh * mm;
		if (res <= 9)
{
			_putchar(' ');
}
		else
			_putchar(res / 10 + '0');

		_putchar(res % 10 + '0');
}
		_putchar('\n');
}
}

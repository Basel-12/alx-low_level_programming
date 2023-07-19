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
	int i, j, res;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
{
	_putchar(48);
	for (j = 1; j <= n; j++)
{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		res = i * j;
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

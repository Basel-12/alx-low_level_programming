#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * times_table - print the time table
 */
void times_table(void)
{
	int hh, mm, res;

	for (hh = 0; hh <= 9; hh++)
{
	_putchar(48);
	for (mm = 1; mm <= 9; mm++)
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

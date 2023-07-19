#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * times_table - function to get last digit of a number
 *
 * Return: returns 1 if 'c' is alphabet otherwise returns 0
 *
*/
void times_table(void)
{
	int hh, mm, res;

	for (hh = 0; hh <= 9; hh++)
{
	for (mm = 1; mm <= 9; mm++)
{
		res = hh * mm;
		if (mm != 9)
{
		_putchar(',');
		_putchar(' ');
}
		if (res <= 9)
		{
			putchar(' ');
		}
		_putchar(res / 10 + '0');
		if (res > 9)
			_putchar(res % 10 + '0');
}
	if (hh != 9)
		_putchar('\n');
}
}

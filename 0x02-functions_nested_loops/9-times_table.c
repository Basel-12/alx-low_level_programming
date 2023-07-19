#include <stdlib.h>
i
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * jack_bauer - function to get last digit of a number
 *
 * Return: returns 1 if 'c' is alphabet otherwise returns 0
 *
*/
void jack_bauer(void)
{
	int hh, mm, res;

	for (hh = 0; hh <= 9; hh++)
{
	for (mm = 0; mm <= 9; mm++)
{
		res = hh * mm;
		_putchar(res + '0');
		_putchar(',');
		if (mm != 9)
			_putchar(' ');
}
	if (hh != 9)
		_putchar('\n');
}
}

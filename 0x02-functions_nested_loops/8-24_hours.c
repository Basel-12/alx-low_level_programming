#include <stdlib.h>
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
	int hh, mm;

	for (hh = 0; hh < 24; hh++)
{
	for (mm = 0; mm < 60; mm++)
{
		_putchar((hh / 10) + '0');
		_putchar((hh % 10) + '0');
		_putchar(':');
		_putchar((mm / 10) + '0');
		_putchar((mm % 10) + '0');
		_putchar('\n');
}
}
}
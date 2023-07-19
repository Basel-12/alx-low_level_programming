#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_last_digit - function to get last digit of a number
 *
 * @n: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet otherwise returns 0
 *
*/
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = (-1 * (n % 10));
	else
		last = n % 10;
	_putchar(last + '0');
	return (last);
}

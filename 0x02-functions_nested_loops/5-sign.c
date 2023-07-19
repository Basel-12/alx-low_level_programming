#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_sign - function to check if sign of a number
 *
 * @n: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet otherwise returns 0
 *
*/
int print_sign(int n)
{
	if (n > 0)
{
	_printchar('+');
	return (1);

}
	if (n < 0)
{
	_printchar('-');
	return (-1);
}
	_printchar('0');
	return (0);
}

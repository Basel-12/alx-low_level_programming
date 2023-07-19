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
	if (n < 0)
		return (-1 * (n % 10))
	return (n % 10);
}

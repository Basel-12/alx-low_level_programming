#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * factorial - function
 *
 * @n: pointer of an integer
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}

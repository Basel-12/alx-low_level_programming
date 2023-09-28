#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* factorial - function return size of string
*
* @n: char pointer
*
* Return: void
*
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

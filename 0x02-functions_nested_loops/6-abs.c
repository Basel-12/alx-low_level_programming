#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _abs - function to get absolute
 *
 * @n: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet otherwise returns 0
 *
*/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

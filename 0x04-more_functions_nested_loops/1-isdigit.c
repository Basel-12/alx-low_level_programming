#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _isdigit - function to check if character lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

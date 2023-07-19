#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _isalpha - function to check if character is alphabet or not
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet otherwise returns 0
 *
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

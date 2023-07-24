#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * swap_int - function
 *
 * @a: pointer of an integer
 *
 * @b: pointer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

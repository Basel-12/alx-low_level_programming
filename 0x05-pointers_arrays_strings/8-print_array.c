#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_array - function
 *
 * @a: pointer of an integer
 *
 * @n: input
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; ++i)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}

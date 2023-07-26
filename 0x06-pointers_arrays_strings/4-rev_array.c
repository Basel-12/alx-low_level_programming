#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * reverse_array  - function
 *
 * @a: pointer of an integer
 *
 * @n: pointer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2 ; ++i)
{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
}
}

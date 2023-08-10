#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"
#include <string.h>


/**
 * array_range - function
 *
 * @min: size of an array
 *
 * @max: input char
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
int *array_range(int min, int max)
{
	int *m, i = 0;

	if (min > max)
		return (NULL);
	m = (int *)malloc((max - min + 1) * sizeof(int));
	if (m == 0)
		return (NULL);
	while (min <= max)
	{
		m[i] = min++;
		i++;
	}
	return (m);
}

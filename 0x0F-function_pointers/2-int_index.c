#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "function_pointers.h"


/**
 * int_index - function
 *
 * @array: array of int
 *
 * @size: size of array
 *
 * @cmp: function pointer
 *
 * Return: integer
 *
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}

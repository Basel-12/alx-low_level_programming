#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function print name to function passed to it
 *
 * @array: pointer to an array
 *
 * @size: size of array
 *
 * @cmp: pointer funtion
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
		return (-1);
	}
}

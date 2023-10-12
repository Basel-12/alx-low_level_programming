#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function print name to function passed to it
 *
 * @array: pointer to an array
 *
 * @size: size of array
 *
 * @action: pointer funtion
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

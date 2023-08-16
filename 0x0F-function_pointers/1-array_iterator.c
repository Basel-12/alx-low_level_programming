#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "function_pointers.h"


/**
 * array_iterator - function
 *
 * @array: array of int
 *
 * @size: size of array
 *
 * @action: function pointer
 *
 * Return: void
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i = 0;

		while (i < size)
			action(array[i++]);
	}
}

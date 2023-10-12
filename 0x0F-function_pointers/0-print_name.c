#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function print name to function passed to it
 *
 * @name: name
 *
 * @f: pointer funtion
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

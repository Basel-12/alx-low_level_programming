#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"
#include "function_pointers.h"


/**
 * print_name - function
 *
 * @name: array of char
 *
 *@f: function pointer
 *
 * Return: void
 *
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

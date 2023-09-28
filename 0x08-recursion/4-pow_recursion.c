#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _pow_recursion - function return size of string
*
* @x: char pointer
*
* @y: input function
*
* Return: void
*
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

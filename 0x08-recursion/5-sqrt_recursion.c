#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int find_sqrt(int n, int val);
/**
* _sqrt_recursion - function return size of string
*
* @n: function paramter
*
* Return: void
*
*/
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
/**
 *find_sqrt - function
 *
 *@n: function parameter
 *
 *@val : function parameter
 *
 *Return: int
 *
*/
int find_sqrt(int n, int val)
{
	if (val * val  == n)
		return (val);
	if (val * val < n)
		return (find_sqrt(n, val + 1));
	else
		return (-1);
}

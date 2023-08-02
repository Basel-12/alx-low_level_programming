#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _sqrt_recursion - function
 *
 * @n: pointer of an integer
 *
 *
 * @val: input
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
int squareroot(int n, int val);
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}
/**
 * squareroot -  function
 *
 *@n: input
 *
 *@val: input
 *
 * Return: return sqrt of n
 */
int squareroot(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
	{
		return (squareroot(n, val + 1));
	}
	else
		return (-1);
}

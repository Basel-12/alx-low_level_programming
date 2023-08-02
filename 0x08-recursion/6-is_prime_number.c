#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * is_prime_number - function
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
int is_prime_number(int n)
{
	return (squareroot(n, 2));
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
	if (val >= n && n > 1)
		return (1);
	if (n % val == 0 || n <= 1)
		return (0);
	else
		return (squareroot(n, val + 1));
}

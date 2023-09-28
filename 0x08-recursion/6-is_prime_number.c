#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int check_prime(int n, int val);
/**
* is_prime_number - function return size of string
*
* @n: function paramter
*
* Return: void
*
*/
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 *check_prime - function
 *
 *@n: function parameter
 *
 *@val : function parameter
 *
 *Return: int
 *
*/
int check_prime(int n, int val)
{
	if (val >= n && n > 1)
		return (1);
	if (n % val == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, val + 1));
}

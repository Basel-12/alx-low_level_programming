#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"


/**
* op_add - function
*
* @a: integer
*
* @b: integer
*
* Return: sum of a, b
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
* op_sub - function
*
* @a: integer
*
* @b: integer
*
* Return: diifrence betwwen a,b
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - function
*
* @a: integer
*
* @b: integer
*
* Return: multiplication of a, b
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
*op_div - function
*
* @a: integer
*
* @b: integer
*
* Return: a divided by b
*
*/

int op_div(int a, int b)
{
	return (a / b);
}


/**
*op_mod - function
*
* @a: integer
*
* @b: integer
*
*Return: a mod b
*/

int op_mod(int a, int b)
{
	return (a % b);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strlen_recursion - function return size of string
*
* @s: char pointer
*
* return: int
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (n);
	n += _strlen_recursion(s + 1) + 1;
}

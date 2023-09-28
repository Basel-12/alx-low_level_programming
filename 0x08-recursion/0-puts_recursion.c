#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _puts_recursion -  function print string
*
* @s: char pointer
*
* return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar ('\n');
	else
	{
	    _putchar (*s);
	    _puts_recursion(s + 1);
	}
}

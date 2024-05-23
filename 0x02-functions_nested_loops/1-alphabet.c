#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function
 *
 * Description: print from a-z
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}

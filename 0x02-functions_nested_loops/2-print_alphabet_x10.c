#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function
 *
 * Description: print [a-z] 10 times
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++;)
	{
		for (j = 0; j < 26; j++;)
		{
			_putchar('a' + j);
		}
		_putchar('\n');
	}
}

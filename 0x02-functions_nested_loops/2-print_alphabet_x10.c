#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_alphabet_x10 - uses _putchar to print alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	char i;
	int k;

	for (k = 1; k <= 10; ++k)
{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
}

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_diagonal - function to check if character lowercase
 *
 * @n: function input
 *
 * Return: void
 *
*/
void print_diagonal(int n)
{
	int c, k;

	if (n <= 0)
		_putchar('\n');
	for (c = 1; c <= n; c++)
	{
		for (k = 0; k < c - 1; k++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}

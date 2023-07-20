#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_triangle - function to check if character lowercase
 *
 * @size: function input
 *
 * Return: void
 *
*/
void print_triangle(int size)
{
	int c, k, i;

	if (size <= 0)
		_putchar('\n');
	for (c = 1; c <= size; c++)
	{
		for (i = 1; i <= n - c; i++)
			_putchar(' ');
		for (k = 1; k <= c; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_square - function to check if character lowercase
 *
 * @size: function input
 *
 * Return: void
 *
*/
void print_square(int size)
{
	int c, k;

	if (n <= 0)
		_putchar('\n');
	for (c = 1; c <= size; c++)
	{
		for (k = 1; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

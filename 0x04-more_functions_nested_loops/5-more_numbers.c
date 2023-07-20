#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * more_numbers - function to check if character lowercase
 *
 * Return: void
 *
*/
void more_numbers(void)
{
	int c, k;

	for (c = 1; c <= 10; c++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
	_putchar('\n');
	}
}

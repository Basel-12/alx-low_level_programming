#include "main.h"
#include <stdio.h>

/**
 * print_sign - function
 *
 * @n: char to check
 *
 * Description: check if given char is alpha or not
 *
 * Return: 1 on success , 0 on fail
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

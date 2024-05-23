#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - function
 *
 * @c: char to be printed
 *
 * Description: function to print a char to stdout
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, c, sizeof(char)));
}

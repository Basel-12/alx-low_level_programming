#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function
 *
 * @separator: string to separate numbers
 *
 * @n: number of inputs
 *
 * Description: function sums all int arguments
 *
 * Return: 0 or sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, value;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		value = va_arg(args, int);
		printf("%d%s", value, i != (int)n - 1 ? separator ? separator : "" : "\n");
	}
	va_end(args);
}

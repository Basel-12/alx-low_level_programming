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
	int i, flag = 1, value;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	if (*separator == '\0')
		flag = 0;
	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		value = va_arg(args, int);
		if (i != (int)n - 1)
			if (flag)
				printf("%d%s", value, separator);
			else
				printf("%d", value);
		else
			printf("%d\n", value);
	}
	va_end(args);
}

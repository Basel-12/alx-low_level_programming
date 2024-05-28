#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function
 *
 * @separator: string to separate numbers
 *
 * @n: number of inputs
 *
 * Description: function sums all int arguments
 *
 * Return: 0 or sum
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		str = va_arg(args, char *) ? va_arg(args, char *) : "(nil)";
		printf("%s%s", str, i != (int)n - 1 ? separator ? separator : "" : "\n");
	}
	va_end(args);
}

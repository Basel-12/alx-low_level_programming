#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 *
 * @n: number of inputs
 *
 * Description: function sums all int arguments
 *
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
        int i;
        int value;
        va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < (int)n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);
	return (sum);
}

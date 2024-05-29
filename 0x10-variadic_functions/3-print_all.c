#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * pint - print string
 *
 * @str: separator
 *
 * @args: args list
 */

void pint(char *str, va_list args)
{
	printf("%s%d", str, va_arg(args, int));
}

/**
 * pchar - print string
 *
 * @str: separator
 *
 * @args: args list
 */

void pchar(char *str, va_list args)
{
	printf("%s%c", str, va_arg(args, int));
}

/**
 * pfloat - print string
 *
 * @str: separator
 *
 * @args: args list
 */

void pfloat(char *str, va_list args)
{
	printf("%s%f", str, va_arg(args, double));
}

/**
 * pstr - print string
 *
 * @str: separator
 *
 * @args: args list
 */
void pstr(char *str, va_list args)
{
	char *s = va_arg(args, char *);

	if (*s == '\0')
		s = "(nil)";
	printf("%s%s", str, s);
}



/**
 * print_all - function
 *
 * @format: format string
 *
 * Description: function sums all int arguments
 *
 * Return: 0 or sum
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				pint(sep, args);
				break;
			case 'c':
				pchar(sep, args);
				break;
			case 'f':
				pfloat(sep, args);
				break;
			case 's':
				pstr(sep, args);
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
}

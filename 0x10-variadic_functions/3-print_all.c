#include "variadic_functions.h"

/**
 * format_char - function
 *
 *@separator: input function
 *
 * @ag: input
 *
 *
 */
void format_char(char *separator, va_list ag)
{
	printf("%s%c", separator, va_arg(ag, int));
}

/**
 * format_int - function
 *
 *
 * @separator: input function
 *
 * @ag: input
 *
 * Return: void
 *
 */

void format_int(char *separator, va_list ag)
{
	printf("%s%d", separator, va_arg(ag, int));
}

/**
 * format_float - function
 *
 *
 *@separator: input function
 *
 * @ag: input
 *
 *Return: void
 *
 */

void format_float(char *separator, va_list ag)
{
	printf("%s%f", separator, va_arg(ag, double));
}


/**
 * format_string - function
 *
 *
 *@separator: input function
 *
 * @ag: input
 *
 *
 * Return: void
 *
 */

void format_string(char *separator, va_list ag)
{
	char *str = va_arg(ag, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
		printf("%s%s", separator, str);
}

/**
 *print_all - function
 *
 *
 * @format: function input
 *
 *
 * Return: void
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list args;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].t)
		{
			if (format[i] == tokens[j].t[0])
			{
				tokens[j].f(separator, args);
			separator = ", ";
			}
		j++;
		}
	i++;
	}
	va_end(args);
	printf("\n");
}

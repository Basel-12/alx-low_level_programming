#include "variadic_functions.h"


/**
* print_strings - variadic function
*
* @separator: separator between paremtars
*
* @n: number of input
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", (str = va_arg(args, char *)) ? str : "(nill)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}

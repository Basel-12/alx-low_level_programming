#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - function
 *
 * @b: pointer to string
 *
 * Description:  function that converts a binary number to an unsigned int
 *
 * Return: unsigned int value
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; i < (int)strlen(b); i++)
	{
		if (b[i] == '1' || b[i] == '0')
			num = num * 2 + (b[i] - '0');
		else
			return (0);

	}
	return (num);
}

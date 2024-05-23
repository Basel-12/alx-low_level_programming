#include "main.h"
#include <stdio.h>

/**
 * _islower - function
 *
 * @c: char to check
 *
 * Description: check if given char is lower or not
 *
 * Return: 1 on success , 0 on fail
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

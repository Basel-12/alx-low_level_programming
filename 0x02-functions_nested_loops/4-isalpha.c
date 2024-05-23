#include "main.h"
#include <stdio.h>

/**
 * _isalpha - function
 *
 * @c: char to check
 *
 * Description: check if given char is alpha or not
 *
 * Return: 1 on success , 0 on fail
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

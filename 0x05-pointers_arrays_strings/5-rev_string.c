#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * rev_string - function
 *
 * @s: pointer of an integer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void rev_string(char *s)
{
	int len = 0, i = 0;
	char c;

	while (s[i])
	{
		len++;
		i++;
	}
	for (i = 0; i < len / 2 ; ++i)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}

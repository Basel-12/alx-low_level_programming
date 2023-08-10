#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"
#include <string.h>


/**
 * string_nconcat - function
 *
 * @s1: size of an array
 *
 * @s2: input char
 *
 * @n: size
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, i = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	if (n > strlen(s2))
		n = strlen(s2);
	s = (char *) malloc(len1 + n + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < len1 + (int)n ; i++)
	{
		if (i < len1)
			s[i] = s1[i];
		else
			s[i] = s2[i - len1];
	}
	s[i] = '\0';
	return (s);
}

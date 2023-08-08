#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"
#include <string.h>


/**
 * argstostr - function
 *
 * @ac: size of an array
 *
 * @av: input char
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, len = 0, nc = 0;
	char *s;

	for (; i < ac; i++, nc++)
		nc += strlen(av[i]);
	s = (char *)malloc(sizeof(char) * nc + 1);
	if (s == 0 || ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, len++)
			s[len] = av[i][j];
		s[len] = '\n';
		len++;
	}
	s[len] = '\0';
	return (s);
}

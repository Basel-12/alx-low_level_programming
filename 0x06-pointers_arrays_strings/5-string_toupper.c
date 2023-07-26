#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * string_toupper  - function
 *
 * @str: pointer of an integer
 *
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0' ; ++i)
{
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
}
return (str);
}

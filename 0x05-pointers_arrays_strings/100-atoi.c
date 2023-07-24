#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * _atoi  - function
 *
 * @s: pointer of an integer
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
int _atoi(char *s)
{
	int num=0,sign=1;
	
	do {
		if (*s=='-')
			sign*=-1;
		else if (*s>='0' && *s <='9')
			num= num*10 + (*s -'0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Description: A C progrmam uses puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(string[i]);
	_putchar('\n');

	return (0);
}

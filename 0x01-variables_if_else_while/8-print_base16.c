#include <stdlib.h>
#include <time.h>
#include<stdio.h>


/**
 * main - Entry point
 *
 * Description: A C progrmam uses puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(48 + i);
	for (i = 1; i <= 6; i++)
{
		putchar(96 + i);
	if (i == 6)
		putchar('\n');
}
	return (0);
}

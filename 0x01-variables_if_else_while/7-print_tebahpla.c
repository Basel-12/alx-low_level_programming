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


	for (i = 26; i >= 0; i--)
{
	putchar(96 + i);
	if (i == 1)
		putchar('\n');
}
	return (0);
}

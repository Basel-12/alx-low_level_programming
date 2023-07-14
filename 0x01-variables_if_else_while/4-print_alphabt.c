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

	for (i = 1; i <= 26; i++)
{
	if (i == 5 || i == 17)
		continue;
	putchar(96 + i);
	if (i == 26)
		putchar('\n');
}
	return (0);
}

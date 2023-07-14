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
	int i = 0, j;

	while (i <= 8)
{
	for (j = i + 1; j <= 9; j++)
{
	putchar('0' + i);
	putchar('0' + j);
	if (i == 8 && j == 9)
{
	break;

}
	putchar(',');
	putchar(' ');
}
	i++;
}
	return (0);
}

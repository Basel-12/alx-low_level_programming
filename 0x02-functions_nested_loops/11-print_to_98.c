#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * print_to_98 - print the time table
 *
 * @n: function input
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
{
	for (i = n; i > 98; i--)
{
	printf("%d, ", i);
}
	printf("98\n");
}
else
{
	for (i = n; i < 98; i++)
{
	printf("%d, ", i);
}
	printf("98\n");

}
}

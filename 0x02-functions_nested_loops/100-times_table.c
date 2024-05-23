#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function
 *
 * @n: number
 *
 * Description: print time table
 *
 * Return: void
 *
 */
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%3d", i * j);
				if (j != n)
					printf(",   ");
				else
					printf("\n");
			}
		}
	}
}

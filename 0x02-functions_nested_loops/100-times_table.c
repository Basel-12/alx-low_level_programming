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
	if (n >= 0 && n <= 15)
	{
		int i, j, x, y;

		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (j = 1; j <= n; j++)
			{
				printf(",");
				x = i * j;
				y = 0;
				while (x > 0)
				{
					y++;
					x /= 10;
				}
				if (y == 3)
					printf(" %d", i * j);
				else if (y == 2)
					printf("  %d", i * j);
				else
					printf("   %d", i * j);
			}
			printf("\n");
		}
	}
}

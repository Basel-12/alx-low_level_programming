#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * alloc_grid - function
 *
 * @height: size of an array
 *
 * @width: input char
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	grid = malloc(sizeof(*grid) * height);
	if (width <= 0 || height <= 0 || grid == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);

		if (grid[i] == 0)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>
#include "main.h"


/**
 * free_grid - function
 *
 * @grid: size of an array
 *
 * @height: input char
 *
 * Return: returns 1 if 'c' is lowercase otherwise returns 0
 *
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}

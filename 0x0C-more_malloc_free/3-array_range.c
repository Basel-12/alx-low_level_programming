#include <stdio.h>
#include <stdlib.h>

/**
* array_range  -  function print string
*
*@min: int
*
*@max: array of char pointers
*
* Return: int pointer
*/
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = (int *)calloc(max - min + 1, sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;
	return (p);
}

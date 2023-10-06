#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked  -  function print string
*
*
*@b: array of char pointers
*
* Return: int
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

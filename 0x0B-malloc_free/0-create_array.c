#include <stdio.h>
#include <stdlib.h>

/**
* create_array  -  function print string
*
* @size: size of array
*
*@c: array of char pointers
*
* Return: int
*/
char *create_array(unsigned int size, char c)
{
	char *s;

	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL || size == 0)
		return (NULL);
	int i;

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

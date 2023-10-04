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
	int i;

	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL || size == 0)
		return (NULL);

	for (i = 0; i < (int)size; i++)
		s[i] = c;
	return (s);
}

#include <stdio.h>
#include <stdlib.h>

/**
* main  -  function print string
*
* @argc: size of array
*
*@argv: array of char pointers
*
* Return: int
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

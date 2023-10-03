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
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		return (1, printf("Error\n"));
	return (0);
}

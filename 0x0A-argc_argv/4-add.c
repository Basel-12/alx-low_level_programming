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
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c ; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

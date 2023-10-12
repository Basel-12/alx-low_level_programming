#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - Prints result of an operation
 * @argc: Number of arguments
 * @argv: Value of arguments
 * Return: Returns an int.
**/

int main(int argc, char *argv[])
{
	int (*op)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (!op)
		printf("Error\n"), exit(99);
	if (!b && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
		printf("Error\n"), exit(100);
	printf("%d\n", op(a, b));
	return (0);
}

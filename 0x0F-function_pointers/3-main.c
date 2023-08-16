#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"


/**
 * main - function
 *
 *@argc: number of command inputs
 *
 * @argv: pointer to array of char
 *
 * Return: 0 if true
*/
int main(int argc, char *argv[])
{
	int (*get_op)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op = get_op_func(argv[2]);
	if (!get_op)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op(a, b));
	return (0);
}

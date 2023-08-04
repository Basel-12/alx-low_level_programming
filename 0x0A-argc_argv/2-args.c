#include <stdlib.h>
#include <time.h>
#include<stdio.h>


/**
 * main - Entry point
 *
 * Description: A C progrmam uses puts function
 *
 * @argc: input
 *
 * @argv: input
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (--argc)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}

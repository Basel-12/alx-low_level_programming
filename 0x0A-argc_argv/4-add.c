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
	int sum = 0;

	while (--argc)
	{
		if (argv[argc] < '0' && argv[argc] > '9)
		{
			return(printf("Error\n"), 1);
		}
		sum += argv[argc];
	}
	printf("%d\n", sum);
	return (0);
}

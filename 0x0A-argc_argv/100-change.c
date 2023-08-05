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
	if (argc == 2)
	{
		int num = atoi(argv[1]), res = 0, i;
		int valid[] = {25, 10, 5, 2, 1};

		if (num < 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (num >= valid[i])
				{
					res += num / valid[i];
					num %= valid[i];
					if (num % valid[i] == 0)
					{
						break;
					}
				}
			}
			printf("%d\n", res);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

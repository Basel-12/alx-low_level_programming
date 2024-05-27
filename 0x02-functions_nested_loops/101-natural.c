#include <stdio.h>
#include <stdlib.h>

/**
 * main - test program
 *
 * Description: sum naturan numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 5; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

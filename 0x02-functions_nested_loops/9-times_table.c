#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include<unistd.h>

/**
 * times_table - print the time table
 */
void times_table(void)
{
	int hh, mm, res;

	for (hh = 0; hh <= 9; hh++)
{
	for (mm = 1; mm <= 9; mm++)
{
		res = hh * mm;
		if (res <= 9)
{
			putchar(' ');
}
		putchar(res / 10 + '0');
	if (res > 9)
		putchar(res % 10 + '0');
	if (mm != 9)
{
		putchar(',');
		putchar(' ');
}
}
	if (hh != 9)
		putchar('\n');
}
}

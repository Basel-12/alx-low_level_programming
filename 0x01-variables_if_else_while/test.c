#include <stdlib.h>
#include <time.h>
#include<stdio.h>


/**
 * main - Entry point
 *
 * Description: A C progrmam uses puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    for (i = 0; i <=9; i++)
    {
        putchar(48 + i);
        if (i==9){
            putchar('$');
            break;
        }
        putchar(',');
        putchar(' ');
    }
	return (0);
}

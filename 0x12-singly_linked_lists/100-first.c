#include <stdio.h>
/**
 * before_main - function
 *
 * Description: print specific string
 *
 * Return: void
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow\,
			\nI bore my house upon my back!\n");
}

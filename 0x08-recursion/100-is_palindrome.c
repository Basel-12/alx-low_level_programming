#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

int check_palindrome(char *s ,int start ,int last);
/**
* is_palindrome - function return size of string
*
* @s: function paramter
*
* Return: void
*
*/
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, strlen(s) - 1));
}
/**
 *check_palindrome - function
 *
 *@s: function parameter
 *
 *@start : function parameter
 *
 *@last: function parameter
 *
 *Return: int
 *
*/
int check_palindrome(char *s, int start, int last)
{
	int siz = strlen(s);

	if (s == NULL || start == siz / 2)
		return (1);
	if (s[start] == s[last])
		return (check_palindrome(s, start + 1, last - 1));
	else
		return (0);
}

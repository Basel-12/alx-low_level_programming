#include <stdio.h>
#include <stdlib.h>

/**
* str_concat  -  function print string
*
* @s1: size of array
*
*@s2: array of char pointers
*
* Return: int
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1)
		while (s1[len1])
			len1++;
	else
		s1 = "";
	if (s2)
		while (s2[len2])
			len2++;
	else
		s2 = "";
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1 + len2; i++)
	{
		if (i < len1)
			s[i] = s1[i];
		else
			s[i] = s2[i - len1];
	}
	s[i] = '\0';
	return (s);
}

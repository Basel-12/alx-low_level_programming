#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat  -  function print string
*
*@s1: char pointer
*
*@s2: array of char pointers
*
* @n: size
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1 = 0, len2 = 0;

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
	if (n > len2)
		n = len2;
	s = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1 + n ; i++)
	{
		if (i < len1)
			s[i] = s1[i];
		else
			s[i] = s2[i - len1];
	}
	s[i] = '\0';
	return (s);
}

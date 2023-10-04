#include <stdio.h>
#include <stdlib.h>

/**
* _strdup  -  function print string
*
*
*@str: array of char pointers
*
* Return: int
*/
char *_strdup(char *str)
{
	char *s;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

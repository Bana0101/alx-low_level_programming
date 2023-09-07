#include "main.h"

/**
 * _strlen - a function that calculate the size
 * @str: the string
 * Return: integer
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		;
	return (i);
}


/**
 * *string_nconcat -  a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the n character should concatenates
 * Return: s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int  i = 0, j = 0, a = _strlen(s1), b = _strlen(s2);

	if (b > n)
		b = n;
	s = (char *)malloc(a + b + 1);
	if (s == NULL)
		return (NULL);
	if (_strlen(s1) > 0)
	{
		for (i = 0; s1[i]; i++)
			s[i] = s1[i];
	}
	if (b > 0)
	{
		for (j = 0; j < b; j++)
			s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}

#include "main.h"

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: input string
 * @s2: second string
 * Return: null or p
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, size = 0;

	if (s1 != NULL)
		for (i = 0; s1[i]; i++)
			;
	if (s2 != NULL)
	{
		for (j = 0; s2[j]; j++)
			;
	}
	size = i + j;
	p = (char *)malloc(size + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i] > 0; i++)
			p[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] > 0; j++)
		p[i + j] = s2[j];
	}
	if (!(s1 || s2))
		return (NULL);
	return (p);
}

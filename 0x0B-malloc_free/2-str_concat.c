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
	int i, j, size;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	size = i + j;
	p = (char *)malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] > 0; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] > 0; j++)
		p[i + j] = s2[j];
	return (p);
}

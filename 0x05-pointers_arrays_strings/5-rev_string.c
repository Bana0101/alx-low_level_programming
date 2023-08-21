#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s: input adress
 * Return: void
*/

void rev_string(char *s)
{
	int i = 0, j = 0;
	char *v;

	v = s;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i--)
	{
		v[j] = s[i];
		j++;
	}
	while (s[i])
	{
		s[i] = v[i];
		i++;
	}
}

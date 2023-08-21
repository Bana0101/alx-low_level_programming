#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s: input adress
 * Return: void
*/

void rev_string(char *s)
{
	int i = 0, j = 0;
	char *v = s;

	while (*s != '\0')
		s++;
		i++;
	char array[i];

	while (s != v)
	{
		s--;
		array[j] = *s;
		j++;
	}
	j = 0;
	while (*s != '\0')
	{
		*s = array[j];
		s++;
	}
}

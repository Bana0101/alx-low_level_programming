#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s: input adress
 * Return: void
*/

void rev_string(char *s)
{
	int j = 0, l = 0;
	char swap;

	while (s[l])
		l++;
	while (j <= (l / 2))
	{
		swap = s[l - j - 1];
		s[l - j - 1] = s[j];
		s[j] = swap;
		j++;
	}
}

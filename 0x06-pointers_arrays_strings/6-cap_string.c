#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string.
 * @c: input character
 * Return: c
*/

char *cap_string(char *c)
{
	int i, limit = 1;
	char *ptr = c;
	char separators[] = "\n\t,;.\"!?(){}";

	while (*c)
	{
		for (i = 0; i < 12; i++)
			if (*c == separators[i])
			{
				i++;
				limit = 1;
			}
		if (limit == 1 && *c >= 97 && *c <= 122)
		{
			*c = *c - 32;
			limit = 0;
		}
		else if (limit == 1 && *c >= 65 && *c <= 90)
			limit = 0;
		c++;
	}
	return (ptr);
}

#include "main.h"

/**
*/

char *_strchr(char *s, char c)
{
	int i, j = -1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

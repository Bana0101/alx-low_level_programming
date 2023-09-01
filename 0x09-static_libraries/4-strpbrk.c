#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input char
 * @accept: input char
 * Return: s or 0
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return ('\0');
}

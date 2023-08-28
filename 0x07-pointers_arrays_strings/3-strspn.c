#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: input char
 * @accept: input char
 * Return: i
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 * @haystack: input string
 * @needle: input string
 * Return: haystack or Null
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; haystack[i + j] == needle[j]; j++)
		{
			if (needle[j + 1] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}

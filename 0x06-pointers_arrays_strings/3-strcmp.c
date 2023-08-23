#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: input adress
 * @s2: input adress
 * Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	return (result);
}

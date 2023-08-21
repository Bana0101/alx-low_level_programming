#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: input adress
 *
 * Return: c
*/

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}

#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: input adress
 * @s2: input adress
 * Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i < j)
		return (-15);
	else if (i > j)
		return (15);
	else
		return (0);
}

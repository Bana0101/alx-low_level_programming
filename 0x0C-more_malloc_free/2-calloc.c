#include "main.h"

/**
 * *_set - function set memory to zero
 * @s: input char
 * @b: input character
 * @n: input integer
 * Return: s
 */

char *_set(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: the size of elements
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int tbytes;

	if (!(nmemb && size))
		return (NULL);
	tbytes = nmemb * sizeof(int);
	s = malloc(nmemb * sizeof(int));
	if (s == NULL)
		return (NULL);
	_set(s, 0, tbytes);
	return (s);
}

#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: the size of elements
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int tbytes, i;

	if (!(nmemb && size))
		return (NULL);
	tbytes = nmemb * sizeof(int);
	s = malloc(nmemb * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < tbytes; i++)
	{
		s[i] = '0';
	}
	return (s);
}

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
	unsigned int tbytes;

	if (!(nmemb && size))
		return (NULL);
	tbytes = nmemb * size;
	s = malloc(tbytes + 1);
	if (s == NULL)
		return (NULL);
	while (tbytes--)
	{
		*s = 0;
		s++;
	}
	return (s);
}

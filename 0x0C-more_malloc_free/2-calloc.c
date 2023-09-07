#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: the size of elements
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	int i;

	if (!(nmemb && size))
		return (NULL);
	s = malloc(nmemb * size + 1);
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s[i] = '0';
		i++;
	}
	return (s);
}

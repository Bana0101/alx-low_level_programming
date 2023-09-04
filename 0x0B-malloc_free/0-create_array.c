#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: the size of the array
 * @c: charcter that initialize the array
 * Return: Null or p
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

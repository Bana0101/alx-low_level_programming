#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: the size of memory
 * Return: s
 */

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}

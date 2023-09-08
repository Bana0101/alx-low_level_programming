#include "main.h"
/**
 * *derefrence - to chage type
 * @a: the new allocation
 * @b: the old allocation
 * @n: copy size
 * Return: a
 */

char *derefrence(char *a, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
	return (a);
}
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: the old pointer
 * @old_size: the old size
 * @new_size: the new size
 * Return: nptr or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int min = old_size;

	if (ptr == NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	if (min == new_size)
		return (ptr);
	if (new_size < old_size)
		min = new_size;
	nptr = derefrence(nptr, ptr, min);
	free(ptr);
	return (nptr);
}

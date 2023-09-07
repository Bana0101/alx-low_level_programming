#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: integer
 * @max: integer
 * Return: an array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	size = max - min + 1;
	if (size <= 0)
		return (NULL);
	array = malloc(sizeof(int) * size + 1);
	if (array = NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}

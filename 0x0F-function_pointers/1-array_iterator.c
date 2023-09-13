#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: ana array
 * @size: the size of the array
 * @action: the function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

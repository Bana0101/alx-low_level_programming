#include "main.h"
/**
 * print_triangle -  function that prints a triangle,
 *
 * @size: input number
 *
 * Return: void
*/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - (i + 1); j++)
				_putchar(' ');
			for (j = size - (i + 1); j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

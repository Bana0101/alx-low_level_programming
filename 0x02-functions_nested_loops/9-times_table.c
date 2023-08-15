#include "main.h"

/**
 * times_table - a function that prints the 9 times table.
 *
 * Return: void
*/

void times_table(void)
{
	int i, j;

	for (i = 0; j <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_times_table -  a function that prints the n times table,
 *
 * @n: input number
 *
 * Return: void
 *
*/

void print_times_table(int n)
{
int i, j, r;

if (n >= 0 && n <= 15
{	
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;
			if (r < 10)
			{
				_putchar(r + '0');
			}
			if (r >= 10 && r <= 99)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (r >= 100)
			{
				_putchar((r / 100) + '0');
				_putchar((r / 10) % 10 + '0');
				_putchar(r % 10 + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 100)
				{
					_putchar(' ');
				}
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
}

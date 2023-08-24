#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: input integer
 * Return: void
*/

void print_number(int n)
{
	unsigned int deep;

	deep = n;
	if (n < 0)
	{
		_putchar('-');
		deep = -n;
	}
	if (deep / 10)
		print_number(deep / 10);
	_putchar((deep % 10) + '0');
}

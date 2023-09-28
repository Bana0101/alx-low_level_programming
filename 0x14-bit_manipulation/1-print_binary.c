#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: an integer number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = n, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (m)
	{
		m >>= 1;
		count++;
	}
	while (count--)
	{
		if (n & (1 << count))
			_putchar('1');
		else
			_putchar('0');
	}
}

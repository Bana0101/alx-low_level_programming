#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: input number
 * Return: void
*/
void print_number(int n)
{
	int x;

	x = n;
	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}

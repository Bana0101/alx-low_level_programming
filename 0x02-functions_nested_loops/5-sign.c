#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 *
 * @n: is an input number
 *
 * Return: 1 if the number is greater than zero,
 *         0 if the number is zero, -1 if the number less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

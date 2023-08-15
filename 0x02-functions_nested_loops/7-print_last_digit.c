#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @c: input number
 *
 * Return: 0
*/

int print_last_digit(int c)
{
	int r;

	if (c >= 0)
		return (r = c % 10);
	else
		return (r = (-1) * (c % 10));
}

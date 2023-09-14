#include "variadic_functions.h"

/**
 * sum_them_all -  the sum of all its parameters.
 * @n: the number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}

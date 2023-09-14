#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: a separator
 * @n: the number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator)
		{
			for (j = 0; separator[j]; j++)
				printf("%c", separator[j]);
		}
	}
	printf("\n");
	va_end(args);
}

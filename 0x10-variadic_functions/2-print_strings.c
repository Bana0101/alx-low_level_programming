#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: a separator
 * @n: the number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *string;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

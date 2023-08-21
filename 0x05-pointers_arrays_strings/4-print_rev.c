#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: input adress
 * Return: void
*/

void print_rev(char *s)
{
	char *v = s;

	while (*s != '\0')
		s++;
	while (s != v)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}

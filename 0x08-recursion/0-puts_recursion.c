#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: input string
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}


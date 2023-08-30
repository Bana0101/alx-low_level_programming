#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: input string
 * Return: void
*/

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) == 0)
		_putchar('\n');
	s++;
	if (*s)
		_puts_recursion(s);
}

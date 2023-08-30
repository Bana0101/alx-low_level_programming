#include "main.h"

/**
 * _print_rev_recursion -  a function that prints a string in reverse.
 * @s: input string
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}

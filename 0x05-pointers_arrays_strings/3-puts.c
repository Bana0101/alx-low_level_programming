#include "main.h"

/**
 * _puts -  a function that prints a string
 * @str: inputs string
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

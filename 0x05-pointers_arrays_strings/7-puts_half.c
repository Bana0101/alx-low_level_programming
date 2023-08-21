#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input adress
 * Return: void
*/

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	for (j = (i + 1) / 2; str[j]; j++)
		_putchar(str[j]);
	_putchar('\n');
}

include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: 1
*/
void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
		_ptchar(a);
	_putchar('\n');
}

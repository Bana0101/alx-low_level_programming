#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	char rang[] = "_putchar";
	int i;

	for (i = 0; rang[i] != '\0'; i++)
	{
		_putchar(rang[i]);
	}
	_putchar('\n');
	return (0);
}

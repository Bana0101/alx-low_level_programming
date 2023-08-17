#include "main.h"
/**
 * main - entry point
 * Return: 0
*/
int main(void)
{
	int i;

	_putchar('1');
	for (i = 2; i <= 100; i++)
	{	_putchar(' ');
		if ((i % 3) != 0 && (i % 5) != 0)
			_putchar(i + '0');
		if ((i % 3) == 0 && (i % 5) != 0)
		{	_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		if ((i % 3) != 0 && (i % 5) == 0)
		{	_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		if ((i % 3) == 0 && (i % 5) == 0)
		{	_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
	}
	_putchar('\n');
	return (0);
}

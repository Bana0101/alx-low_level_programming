#include "main.h"

/**
 * _ato - a function that convert a string to an integer.
 * @s: input adress
 * Return: v
*/

int _ato(char *s)
{
	int sign = 1, i = 0;
	unsigned long int v = 0;

	while (s[i])
	{
		if (s[i] == 45)
			sign = -sign;
		if (s[i] <= 57 && s[i] >= 48)
		{
			v = v * 10 + (s[i] - '0');
		}
		i++;
	}
	return (sign * v);
}

/**
 * _ischar - a function that checks for a digit (0 through 9).
 *
 * @c: input number
 *
 * Return: 1 if the number is between 0 and 9, otherwise 0
*/

int _ischar(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] < 48 || c[i] > 57)
			return (1);
	}
	return (0);
}

/**
 * prints - ptint string
 * @c: string
 * Return: void
 */

void prints(char *c)
{
	int i = 0;

	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_digit - a function that print digit
 * @n: digit to print
 * Return: void
 */

void print_digit(unsigned long int n)
{
	unsigned long int m = n / 10;

	if (m)
	{
		print_digit(m);
	}
	_putchar((n % 10) + 48);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		prints("Error");
		exit(98);
	}
	if (_ischar(argv[1]) || _ischar(argv[2]))
	{
		prints("Error");
		exit(98);
	}
	print_digit(_ato(argv[1]) * _ato(argv[2]));
	_putchar('\n');
	return (0);
}

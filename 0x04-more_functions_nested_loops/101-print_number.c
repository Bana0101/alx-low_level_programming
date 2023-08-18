#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: input number
 * Return: void
*/
void print_number(int n)
{
	int t, i, j, ctr10 = 1;
	unsigned int cnt = 1;

	t = n;
	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
	}
	while (t > 9)
	{
		t = t / 10;
		cnt++;
	}
	t = n;
	for (i = 0; i < cnt; i++)
	{
		for (j = 0; j < (cnt - (i + 1)); j++)
			t = t / 10;
			ctr10 = ctr10 * 10;
		_putchar(t + '0');
		n = n - t * ctr10;
		ctr10 = 1;
	}
	_putchar('\n');
}

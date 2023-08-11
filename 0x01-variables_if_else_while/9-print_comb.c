#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
			putchar(i + '0');

	}
	return (0);
}

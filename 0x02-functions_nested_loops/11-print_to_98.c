#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 * @n: input number
 *
 * Return: void
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", n);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else
		for (i = n; i <= 98; i++)
		{
			printf("%d", n);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
}

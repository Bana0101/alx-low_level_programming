#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	unsigned long i = 0, n = 1, m = 2, t;

	printf("1");
	while (i < 97)
	{
		printf(", %lu", m);
		t = n;
		n = m;
		m += t;
		i++;
	}
	return (0);
}

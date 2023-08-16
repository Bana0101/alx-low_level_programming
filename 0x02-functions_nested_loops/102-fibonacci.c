#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	int i = 0, n = 1, m = 2, t;

	printf("1");
	while (i < 50)
	{
		printf(" ,%d", m);
		t = n;
		n = m;
		m += t;
		i++;
	}
	printf("\n");
	return (0);
}

#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	long int n = 1, m = 2, t, sum = 0;

	while (m <= 4000000)
	{
		if ((m % 2) == 0)
			sum += m;
		t = n;
		n = m;
		m += t;
	}
	printf("%ld\n", sum);
	return (0);
}

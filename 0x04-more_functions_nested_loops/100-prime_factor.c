#include "main.h"

/**
 * main - rntry point
 *
 * Return: 0
*/

int main(void)
{
	long int i = 2, n;

	n = 612852475143;
	while (i < n)
	{
		if ((n % i) != 0)
			i++;
		else
			n /= i;
	}
	printf("%ld", n);
	return (0);
}

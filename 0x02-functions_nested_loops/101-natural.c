#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	int i = 2, sum = 0;

	while (i <= 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%d", sum);
	return (0);
}

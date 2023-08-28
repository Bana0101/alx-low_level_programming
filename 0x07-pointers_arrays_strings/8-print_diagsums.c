#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: input integer
 * @size: input size
 * Return: void
 *
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - 1 - i];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}

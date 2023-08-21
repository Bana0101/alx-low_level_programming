#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: input array
 * @n: the size of the array
 * Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	printf("\n");
}

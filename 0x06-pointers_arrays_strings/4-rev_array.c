#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input array
 * @n: input integer
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}

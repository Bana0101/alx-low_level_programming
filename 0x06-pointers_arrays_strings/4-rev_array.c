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

	for (i = 0; i <= (n - 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

#include "main.h"

/**
 * _sqrt - square number
 * @n: input integer
 * @m: input integer
 * Return: integer
*/
int _sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	else
		return (_sqrt(n, m + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: input integer
 * Return: square of n
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

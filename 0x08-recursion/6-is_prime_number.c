#include "main.h"

/**
 * _prime - found prime number
 * @n: tested number
 * @m: divider number
 * Return: 0 or 1
*/
int _prime(int n, int m)
{
	if (n == m)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (_prime(n, m + 1));
}
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: tested number
 * Return: 0 or 1
*/
int is_prime_number(int n)
{
	if (n < 0)
		n = -n;
	if (n == 1)
		return 0;
	else
		return (_prime(n, 2));
}


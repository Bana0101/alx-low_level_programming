#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 *
 * @c: input number
 *
 * Return: 1 if the number is between 0 and 9, otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}

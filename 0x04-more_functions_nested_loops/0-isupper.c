#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: input number
 *
 * Return: 1 if the character is an uppercase, otherwise 0
 *
 *
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

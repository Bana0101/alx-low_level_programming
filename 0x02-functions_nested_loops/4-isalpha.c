#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: is an input character
 *
 * Return: 1 if its a letter otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

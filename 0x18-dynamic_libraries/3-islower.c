#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *
 * @c: is an input character
 *
 * Return: 1 if its a lowercase character otherwise its 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

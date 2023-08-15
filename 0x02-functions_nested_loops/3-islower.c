#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 *
 * return: 1 if is a lowercase character otherwise is 0
*/

int _islower(char c)
{
	if (&c >= 'a' && &c <= 'z')
		return (1);
	return (0);
}

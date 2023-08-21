#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: input adress
 * Return: v
*/

int _atoi(char *s)
{
	int sign = 1, i = 0, j = 1;
	char *v;

	while (s[i])
	{
		if (s[i] == 45)
			sign = -sign;
		if ( s[i] <= 57 && s[i] >= 48)
		{
			v[j] = s[i];
			j++;
		}
	}
	v[0] = sign + '0';
	return (v);

}

#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: input adress
 * Return: v
*/

int _atoi(char *s)
{
	int sign = 1, i = 0;
	int v = 0;

	while (s[i])
	{
		if (s[i] == 45)
			sign = -sign;
		if (s[i] <= 57 && s[i] >= 48)
		{
			v = v * 10 + (s[i] - '0');
			if (s[i + 1] > 57 || s[i + 1] < 48)
				break;
		}
		i++;
	}
	return (sign * v);

}

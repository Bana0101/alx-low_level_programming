#include "main.h"

/**
 * leet -  a function that encodes a string into 1337.
 * @c: input character
 * Return: p
*/

char *leet(char *c)
{
	char *p = c;
	char Letter[] = "AEOTL";
	int Number[] = {4, 3, 0, 7, 1}, i;

	while (*c)
	{
		for (i = 0; i < 5; i++)
		{
			if ((*c == Letter[i]) || (*c == Letter[i] + 32))
				*c = Number[i] + 48;
		}
		c++;
	}
	return (p);
}

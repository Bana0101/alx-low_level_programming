#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @c: input adress
 * Return: c
*/

char *rot13(char *c)
{
	int i;
	char *p = c;
	char src[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*c)
	{
		for (i = 0; i < 52; i++)
		{
			if (*c == src[i])
			{
				*c = rot13[i];
				break;
			}
		}
		c++;
	}
	return (p);
}

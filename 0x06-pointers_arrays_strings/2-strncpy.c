#include "main.h"
/**
 * *_strncpy - a function that copies a string.
 * @dest: input adress
 * @src: input adress
 * @n: input number
 * Return: dest
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while ((src[i] != '\0') && (i < n));
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

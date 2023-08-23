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

	for (i = 0; (src[i] != '\0') && (i < n); i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

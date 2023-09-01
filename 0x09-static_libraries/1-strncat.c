#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: input adress
 * @src: input adress
 * @n: input number
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = -1;

	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0' && (j <= (n - 1)); j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

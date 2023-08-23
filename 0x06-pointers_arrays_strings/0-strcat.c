#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: input adress
 * @src: input adress
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = -1;

	while (dest[i])
		i++;
	do
	{
		j++;
		dest[i + j] = src[j];
	}while (src[j]);
	return (dest);
}

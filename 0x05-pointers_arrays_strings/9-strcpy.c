#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: input adress
 * @src: input adress
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

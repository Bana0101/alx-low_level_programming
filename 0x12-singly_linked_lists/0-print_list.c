#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: input adress
 *
 * Return: c
*/

int _strlen(char *s)
{
	int c = 0;

	if (!s)
		return (0);
	while (*s++)
		c++;
	return (c);
}
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list
 * Return: i
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s", _strlen(h->str), h->str ? h->str : "(nill)");
		h = h->next;
		i++;
	}
	return (i);
}

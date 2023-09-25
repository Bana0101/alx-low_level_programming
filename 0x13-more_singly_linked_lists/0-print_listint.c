#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the header
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *node;


	node = h;
	while (node)
	{
		i++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (i);
}

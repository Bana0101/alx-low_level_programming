#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: the header
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *node;

	node = h;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}

#include "lists.h"

/**
 * free_listint_safe - prints all the elements of a listint_t list.
 * @h: the header
 * Return: the number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *node, *fast_node;

	node = *h;
	fast_node = node->next;
	while (node != fast_node)
	{
		i++;
		free(h);
		*h = fast_node;
		fast_node = fast_node->next;
	}
	*h = NULL;
	return (i);
}

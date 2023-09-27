#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * @head: the header
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *node;

	node = head;
	while (node)
	{
		i++;
		printf("[%p] %d\n", (void *)head, node->n);
		node = node->next;
	}
	return (i);
}

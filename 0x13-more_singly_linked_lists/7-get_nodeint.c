#include "lists.h"

/**
 * *get_nodeint_at_index - get the nth node of a listint_t linked list.
 * @head: the header
 * @index: the index of nth node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	if (!head)
		return (NULL);
	node = head;
	for (n = 0; n < index; n++)
		node = node->next;
	return (node);
}

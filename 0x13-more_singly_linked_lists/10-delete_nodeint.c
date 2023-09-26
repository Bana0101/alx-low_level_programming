#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position.
 * @head: the header of the list
 * @index: the index of the node to be add
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p_node;
	unsigned int i = 0;

	if (!head)
		return (-1);
	node = *head;
	if (!index)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			p_node->next = node->next;
			free(node);
			return (1);
		}
		p_node = node;
		node = node->next;
		i++;
	}
	return (-1);
}

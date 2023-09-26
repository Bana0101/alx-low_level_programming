#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the header of the list
 * @idx: the index of the node to be add
 * @n: the data of the new node
 * Return: new node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p_node, *node, *new_node;
	unsigned int i = 0;

	if (!*head || !head)
		return (NULL);
	node = *head;
	for (i = 0; i < idx; i++)
	{
		p_node = node;
		node = node->next;
		if (!node)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	p_node->next = new_node;
	new_node->next = node;
	return (new_node);
}


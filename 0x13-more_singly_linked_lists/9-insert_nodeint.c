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
	listint_t *node, *new_node;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	for (i = 0; i < idx; i++)
	{
		if (i == idx - 1 && node)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		node = node->next;
	}
	free(new_node);
	return (NULL);
}


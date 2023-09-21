#include "lists.h"

/**
 * free_list - that free a list_t list.
 * @head: the head
 * Return: the new head
 */

void free_list(list_t *head)
{
	list_t *next_node, *node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}

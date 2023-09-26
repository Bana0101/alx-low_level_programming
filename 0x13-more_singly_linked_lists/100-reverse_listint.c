#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: the header of the list
 * Return: the header
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *next_node, *p_node;

	if (!*head || !head)
		return (NULL);
	node = *head;
	p_node = NULL;
	while (node)
	{
		next_node = node->next;
		node->next = p_node;
		*head = node;
		p_node = node;
		node = next_node;
	}
	return (*head);
}

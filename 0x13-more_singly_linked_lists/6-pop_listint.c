#include "lists.h"

/**
 * pop_listint - that deletes the head node of a listint_t
 * @head: the header of the list
 * Return: the data of the old header
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *head_node;

	if (head && *head)
	{
		head_node = *head;
		*head = head_node->next;
		n = head_node->n;
		free(head_node);
	}
	return (n);
}


#include "lists.h"

/**
 * *add_nodeint -  adds a new node at the beginning 
 * @head: the header
 * @n: the data of the new node
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (!head)
		*head = node;
	else
	{
		node->next = *head;
		node->prev = NULL;
		*head = node;
	}
	return (node);
}

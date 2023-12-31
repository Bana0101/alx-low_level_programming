#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: the header of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;
	while (*head)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}

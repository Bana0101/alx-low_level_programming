#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the header of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;
	while (head)
	{
		head = current->next;
		free(current);
		current = head;
	}
}

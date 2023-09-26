#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 * @head: the header
 * Return: the sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head)
	{
		node = head;
		while (node)
		{
			sum += node->n;
			node = node->next;
		}
	}
	return (sum);
}

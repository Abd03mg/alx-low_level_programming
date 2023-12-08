#include "lists.h"

/**
 * free_dlistint - function that frees a list.
 *
 * @head: pointer to list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		free(head);
		head = tmp->next;
	}
	free(tmp);
}

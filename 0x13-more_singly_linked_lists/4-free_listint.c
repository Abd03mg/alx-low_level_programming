#include "lists.h"

/**
 * free_listint - function that free linked list.
 * @head: pointer to struct.
 */

void free_listint(listint_t *head)
{
	listint_t *swap;

	while (head)
	{
		swap = head->next;
		free(head);
		head = swap;
	}
}

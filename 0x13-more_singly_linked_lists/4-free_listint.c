#include "lists.h"

/**
 * free_listint - fuctio that frees list.
 *
 * @head: listint list.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

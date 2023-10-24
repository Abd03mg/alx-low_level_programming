#include "lists.h"

/**
 * free_listint2 - fuction that frees a list.
 *
 * @head: listint_t list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head && head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}

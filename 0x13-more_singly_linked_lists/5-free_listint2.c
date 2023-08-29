#include "lists.h"

/**
 * free_listint2 - function that free linked list
 * and set head to null.
 * @head: double pointer to struct.
 */

void free_listint2(listint_t **head)
{
	listint_t *swap;

	if (head)
	{

		while (*head)
		{
			swap = (*head)->next;
			free(*head);
			*head = swap;
		}
		*head = NULL;
	}
}

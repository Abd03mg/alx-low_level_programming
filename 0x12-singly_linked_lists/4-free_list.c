#include "lists.h"

/**
 * free_list - function that frees a list.
 * @head: list mst be freed.
 */

void free_list(list_t *head)
{
	list_t *ne;

	while (head)
	{
		ne = head->next;
		free(head->str);
		free(head);
		head = ne;
	}
}

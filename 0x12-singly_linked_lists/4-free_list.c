#include "main.h"

/**
 * free_list - function that frees list.
 *
 * @head: input list.
 */

void free_list(list_t *head)
{
	list_t *ap;

	if (!head)
		return;

	for ( ; head; )
	{
		ap = head;
		head = head->next;
		free(ap->str);
		free(ap);
	}
}

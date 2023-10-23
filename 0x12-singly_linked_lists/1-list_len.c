#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in alinked list.
 *
 * @h: input linked list.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	for ( ; h != NULL; i++)
		h = h->next;
	return (i);
}

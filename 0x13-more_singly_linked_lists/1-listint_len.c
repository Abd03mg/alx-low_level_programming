#include "lists.h"

/**
 * listint_len - function that returns the number of nodes.
 *
 * @h: listint_t list.
 * Return: lenght of list.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for ( ; h; i++)
		h = h->next;
	return (i);
}

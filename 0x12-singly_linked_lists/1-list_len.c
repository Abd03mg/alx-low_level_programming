#include "lists.h"

/**
 * list_len - function that returns the number of elements.
 * @h: input liked list.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t elems = 0;

	while (h)
	{
		h = h->next;
		elems++;
	}
	return (elems);
}

#include "lists.h"

/**
 * dlistint_len - function that retrieves lenght of list.
 *
 * @h: pointer to doubly list.
 * Return: lenght of doubly list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	for (; h; len++)
		h = h->next;
	return (len);
}

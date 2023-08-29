#include "lists.h"

/**
 * listint_len - function that return lenght of liked list.
 * @h: pointer to structer.
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}

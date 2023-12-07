#include "lists.h"

/**
 * print_dlistint - function that print all elements of linked list.
 *
 * @h: pointer to linked list
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *sec = h->next;
	size_t num = 0;

	for ( ; h; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}


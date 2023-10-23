#include "lists.h"

/**
 * print_listint - functio that prints all the elemets
 * of linked list.
 *
 * @h: listint_t list.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for ( ; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

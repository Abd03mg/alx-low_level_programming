#include "lists.h"

/**
 * print_list - function that prints all the elements
 * of a list_t list.
 *
 * @h: input linked list.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for ( ; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
	}
	return (i);
}

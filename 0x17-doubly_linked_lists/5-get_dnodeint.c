#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node.
 *
 * @head: pointer to dlistint list.
 * @index: index of needed node.
 * Return: node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}

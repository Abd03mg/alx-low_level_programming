#include "lists.h"

/**
 * get_nodeint_at_index - function that return nth node.
 *
 * @head: listint_t list.
 * @index: index of node.
 * Return: node at index nth.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

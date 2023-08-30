#include "lists.h"

/**
 * get_nodeint_at_index - function that return node at nth index.
 * @head: pointer to struct.
 * @index: specific index of node must return.
 * Return: node, 0 if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *cp = head;

	if (!head)
		return (0);

	for (counter = 1; counter <= index; counter++)
	{
		cp = cp->next;
		if (index > counter)
			return (0);
	}
	
	return (cp);
}

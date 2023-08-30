#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete node at specific idx.
 * @head: pointer to linked list.
 * @index: target index.
 * Return: 1 if success, or -1 if it faild.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c;
	listint_t *cp = *head;
	listint_t *next;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}
	for (c = 0; c < index - 1; c++)
	{
		if (cp)
			cp = cp->next;
		else
			return (-1);
	}
	next = cp->next;
	cp->next = next->next;
	free(next);
	return (1);
}

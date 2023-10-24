#include "lists.h"

/**
 * delete_nodeint_at_index - functio that deletes node at idx.
 *
 * @head: listint_t list.
 * @index: index of node to be deleted.
 * Return: 1 if success or -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *new = NULL;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	new = tmp->next;
	tmp->next = new->next;
	free(new);
	return (1);
}

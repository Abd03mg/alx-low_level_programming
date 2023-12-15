#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delets node at nth idx.
 * @head: pointer to doubly list.
 * @index: idx of node.
 * Return: 1 if success , 0 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int c;

	if (*head == NULL)
		return (-1);

	cur = *head;
	if (index == 0)
	{
		*head = cur->next;
		if (cur->next != NULL)
		{
			cur->next->prev = NULL;
		}
		free(cur);
		return (1);
	}
	for (c = 0; cur != NULL && c < index - 1 ; c++)
	{
		cur = cur->next;
	}
	if (cur == NULL || cur->next == NULL)
	{
		return (-1);
	}

	if (cur->next->next != NULL)
	{
		cur->next = cur->next->next;
		free(cur->next->prev);
		cur->next->prev = cur;
		return (1);
	}
	else
	{
		free(cur->next);
		cur->next = NULL;
		return (1);
	}
	return (-1);
}

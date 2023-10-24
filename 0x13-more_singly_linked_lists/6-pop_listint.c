#include "lists.h"

/**
 * pop_listint - function that pops head node of list.
 *
 * @head: listint_t list.
 * Return: poped node data.
 */

int pop_listint(listint_t **head)
{
	if (*head)
	{
		listint_t *tmp = *head;
		int t = tmp->n;

		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (t);
	}
	return (0)
}

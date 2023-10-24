#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert node at
 * nth index.
 *
 * @head: listint_t list.
 * @idx: index to be insert to.
 * @n: value of new node.
 * Return: new node address.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new, *tmp = *head;

	if (!(*head))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	while (tmp)
	{
		if (i == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}

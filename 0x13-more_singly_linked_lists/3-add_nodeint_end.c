#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at
 * end of list.
 *
 * @head: listint_t list.
 * @n: value of new node.
 * Return: new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, **tmp = head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	for ( ; *tmp; )
		*tmp = (*tmp)->next;
	(tmp) = &new;
	return (*tmp);
}

#include "lists.h"

/**
 * add_dnodeint_end - function that adds new node at end of list.
 *
 * @head: pointer to head of list.
 * @n: value of new node.
 * Return: pointer to new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	for ( ; (*head)->next; )
		head = &(*head)->next;

	new->n = n;
	new->next = NULL;
	new->prev = *head;
	*head = new;
	return (new);
}

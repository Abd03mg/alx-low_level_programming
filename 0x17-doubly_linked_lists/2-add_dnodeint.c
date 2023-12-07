#include "lists.h"

/**
 * add_dnodeint - function that adds new node at beginning of list.
 *
 * @head: first node at list.
 * @n: value of new node.
 * Return: new element of NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}

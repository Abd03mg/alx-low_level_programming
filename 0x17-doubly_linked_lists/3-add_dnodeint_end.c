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
	dlistint_t *new = malloc(sizeof(dlistint_t)), *cur = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (cur == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	for (; cur->next; )
		cur = cur->next;
	new->prev = cur;
	cur->next = new;
	return (new);
}

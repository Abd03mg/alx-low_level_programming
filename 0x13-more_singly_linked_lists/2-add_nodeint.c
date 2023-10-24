#include "lists.h"

/**
 * add_nodeint - function that return new node at
 * linked list.
 *
 * @head: double poinnter to list.
 * @n: new node value.
 * Return: new node or NULL if it faild.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

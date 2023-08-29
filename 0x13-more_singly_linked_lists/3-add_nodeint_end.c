#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of the list.
 * @head: double pointer to linked list.
 * @n: value of node.
 * Return: the address of new elemnt, or NULL if it faild.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

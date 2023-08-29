#include "lists.h"

/**
 * add_nodeint - function that adds a new node at beginning of linked list.
 * @head: Double pointer to head node.
 * @n: value of new node.
 * Return: address of new element, or null if it faild.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

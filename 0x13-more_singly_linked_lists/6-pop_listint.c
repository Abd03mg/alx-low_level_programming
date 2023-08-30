#include "lists.h"

/**
 * pop_listint - function that deletes the head node of liked list.
 * @head: pointer to linked list.
 * Return: 0 if linked list empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *sw;
	int data;

	if (head == NULL || (*head) == NULL)
		return (0);

	data = (*head)->n;
	sw = (*head)->next;
	free(*head);
	*head = sw;
	return (data);
}

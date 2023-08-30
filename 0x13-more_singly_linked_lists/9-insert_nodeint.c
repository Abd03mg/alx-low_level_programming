#include "lists.h"

/**
 * insert_nodeint_at_indexv - functio that insert a new node at given pos.
 * @head: double pointer to liked list.
 * @idx: position of new node.
 * @n: value of new node.
 * Return: the address of new node, or NULL if it faild.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	for (c = 0; c <= idx; c++)
	{
		*head = (*head)->next;
		if ((idx - c) == 1)
		{
			new->next = (*head)->next->next;
			(*head)->next =  new;
			break;
		}
	}
	return (*head)
}


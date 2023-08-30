#include "lists.h"

/**
 * insert_nodeint_at_index - functio that insert a new node at given pos.
 * @head: double pointer to liked list.
 * @idx: position of new node.
 * @n: value of new node.
 * Return: the address of new node, or NULL if it faild.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *new;
	listint_t *cp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	for (c = 0; c < idx; c++)
	{
		cp = cp->next;
		if (c + 2 < idx)
			return (NULL);
	}

	new->next = cp->next;
	cp->next = new;
	return (new);
}


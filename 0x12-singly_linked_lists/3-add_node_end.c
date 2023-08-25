#include "lists.h"

/**
 * add_node_end - function that add not at end of a list.
 * @head: target list.
 * str: buffer must added.
 * Return: the address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cur = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (cur->next)
		cur = cur->next;

	cur->next = new;

	return (new);
}

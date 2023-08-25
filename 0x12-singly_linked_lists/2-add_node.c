#include "lists.h"

/**
 * add_node - function that add new node at the beginning of list.
 * @head: target list.
 * @str: str must be added.
 * Return: the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
		len = len + 1;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->len = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (*head);
}

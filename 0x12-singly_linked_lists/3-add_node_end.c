#include "lists.h"

/**
 * add_node_end - function that adds node to end of lits.
 *
 * @head: double pointer to list.
 * @str: string value of new node.
 * Return: node at end.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for ( ; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	for ( ; *head; )
		head = &(*head)->next;
	 *head = new;

	return (new);
}


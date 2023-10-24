#include "lists.h"

/**
 * sum_listint - fuction that returns sum of all data.
 *
 * @head: listint_t list.
 * Return: sum of data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for ( ; head; )
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

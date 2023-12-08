#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of nodes.
 *
 * @head: pointer to dlistint list.
 * Return: sum of Ns.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; )
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

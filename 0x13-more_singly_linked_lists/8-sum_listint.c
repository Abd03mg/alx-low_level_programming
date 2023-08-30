#include "lists.h"

/**
 * sum_listint - function that return the sum of all the data.
 * @head: pointer to struct.
 * Return: sum of data, or 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cp = head;

	while (cp)
	{
		if (!(cp->n))
			return (0);

		sum += (int)cp->n;
		cp = cp->next;
	}
	return (sum);
}

#include "main.h"

/**
 * set_bit - function that sets the value of a bit.
 *
 * @n: pointer to int.
 * @index: index of set value.
 * Return: 1 if success or -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}

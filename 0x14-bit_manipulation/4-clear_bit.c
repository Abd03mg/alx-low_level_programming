#include "main.h"

/**
 * clear_bit - function that clears bit.
 *
 * @n: pointer to int.
 * @index: idx of bit.
 * Return: 1 if success or -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

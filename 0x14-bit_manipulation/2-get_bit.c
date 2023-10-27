#include "main.h"

/**
 * get_bit - fuction that returns the value of a bit.
 *
 * @n: given int.
 * @index: idx of returned value.
 * Return: bit in specific idx.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int idx;

	if (index > 64)
		return (-1);
	idx = (n >> index);
	return (idx & 1);
}

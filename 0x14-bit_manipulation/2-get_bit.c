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
	unsigned int len = 0;
	unsigned long int nc = n;
	int a;

	if (n || n != 0)
	{
		while (index >= len)
		{
			a = nc % 2;
			nc /= 2;
			len++;
		}
		return (a);
	}
	else
		return (-1);
}


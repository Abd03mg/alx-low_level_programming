#include "main.h"

/**
 * binary_to_uint - fuctio that converts a inary to uit.
 *
 * @b: pointer to array of chars.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0;

	if (!b)
		return (dec);
	for ( ; b[i] != '\0'; ++i)
	{
		if ((b[i] < '0') || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}

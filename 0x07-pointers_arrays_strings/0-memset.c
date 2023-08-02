#include "main.h"

/**
 * _memset - function that fill memory with constant byte.
 * @s: the source buffer.
 * @b: the cons byte.
 * @n: number of bytes must be filled.
 * Return: return the filled buffer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		s[c] = b;
		c++;
	}

	return (s);
}

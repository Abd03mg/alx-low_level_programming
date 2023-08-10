#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * , and initialize it with specific char.
 * @size: size of the array.
 * @c: specific char that will init the array.
 * Return: Null if size equals zero or if it fails
 * , pointer to array if success.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}

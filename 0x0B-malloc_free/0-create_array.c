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
	char *arr;
	int unsigned i;

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
		return (0);

	arr = malloc(sizeof(char) * size);
	
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}


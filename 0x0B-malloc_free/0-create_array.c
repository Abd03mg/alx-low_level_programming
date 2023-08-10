#include "main.h"
#include <stdlib.h>

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
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	if (*arr == 0)
	{
		return (NULL);
	}
	return (arr);
}


#include "search_algos.h"

/**
 * linear_search - search function using linear search.
 *
 * @array: array to be searched.
 * @size: size of array.
 * @value: the value must searching for.
 *
 * Return: value.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

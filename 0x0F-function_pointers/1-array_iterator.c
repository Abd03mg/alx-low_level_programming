#include "function_pointers.h"

/**
 * array_iterator - function that execute a function given as a parameter.
 * @array: array will be pass to function.
 * @size: size of the array.
 * @action: pointer to function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

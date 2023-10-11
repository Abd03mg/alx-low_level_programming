#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array: input array to be iterate.
 * @size: size of array.
 * @action: pointer to action function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action)
	{
		unsigned int i;

		array = malloc(size * int);

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

#include "function_pointers.h"

/**
 * int_index - function that searches for an int.
 *
 * @array: given array to search in.
 * @size: size of array.
 * @cmp: pointer to function to check value.
 * Return: index of true element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && (size > 0))
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}

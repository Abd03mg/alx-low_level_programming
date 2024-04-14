#include "search_algos.h"

/**
 * binary_search - search function using binary search.
 *
 * @array: array to be searched.
 * @size: size of array.
 * @value: value to be found.
 *
 * Return: value.
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int low = 0, high = size - 1, mid = (low + high) / 2;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low;  i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);

		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

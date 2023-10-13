#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers.
 *
 * @separartor: string sperate the numbers.
 * @n: count of numbers.
 */

void print_numbers(char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}

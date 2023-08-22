#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum of all its parameters.
 * @n: number of args.
 * Return: sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

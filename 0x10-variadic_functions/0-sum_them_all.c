#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all its param.
 *
 * @n: first arguemnt.
 * Return: sum of all its params.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, nar;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		nar = va_arg(args, int);
		sum =  sum + nar;
	}
	va_end(args);
	return (sum);
}

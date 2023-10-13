#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 *
 * @separator: string separare strings.
 * @n: count of strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *nstr = "(nil)", *str;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			str = nstr;
		printf("%s", str);
		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

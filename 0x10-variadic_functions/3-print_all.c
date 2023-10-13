#include "variadic_functions.h"

/**
 * print_all - function thah prints anything.
 *
 * @format: type of arg to be printed.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int num;
	float flt;
	int chr;
	char *str, *sp = ", ";
	va_list args;

	va_start(args, format);
	while (format && *(format + i) != '\0')
	{
		if (!(*(format + 1 + i)))
			sp = "";
		switch (*(format + i))
		{
			case 'c':
				chr = va_arg(args, int);
				printf("%c%s", (char)chr, sp);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d%s", num, sp);
				break;
			case 'f':
				flt = va_arg(args, double);
				printf("%f%s", flt, sp);
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					*str = "(nil)";
				printf("%s%s", sp);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

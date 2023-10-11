#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: the name should be printed.
 * @f: pointer to function that must print name.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#include "main.h"

/**
 * _strlen_recursion - function that retirns the lenght of a string.
 * @s: the string should be count lenght of it.
 * Return: lenght of string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

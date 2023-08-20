#include "3-calc.h"

/**
 * get_op_func - function that select the correct operation.
 * @s: input operator.
 * Return: pointer to function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x;

	x = 0;

	while (ops[x].op)
	{
		if (*s == *(ops[x].op) && *(s + 1) == '\0')
			return (ops[x].f);
		x = x + 1;
	}

	return (NULL);
}

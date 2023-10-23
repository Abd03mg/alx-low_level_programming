#include "function_pointers.h"
/**
 * op_add - funtcion that return sum of integers.
 *
 * @a: first num.
 * @b: second num.
 * Return: sum of integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - funtcion that return sub of integers.
 *
 * @a: first num.
 * @b: second num.
 * Return: sub of integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funtcion that return mul of integers.
 *
 * @a: first num.
 * @b: second num.
 * Return: mul of integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funtcion that return mod of integers.
 *
 * @a: first num.
 * @b: second num.
 * Return: div of integers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - funtcion that return mod of integers.
 *
 * @a: first num.
 * @b: second num.
 * Return: mod of integers.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

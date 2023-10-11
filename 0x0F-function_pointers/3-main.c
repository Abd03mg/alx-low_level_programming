#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - prigram that calc numbers.
 * @argc: count of arguments.
 * @argv: value of args.
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

#include "3-calc.h"

/**
 * main - main function that do the calaculator.
 * @argc: number of args.
 * @argv: value of args.
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	int num1, num2, re;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(*(argv + 2));
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	re = f(num1, num2);
	printf("%d\n", re);
	return (0);
}


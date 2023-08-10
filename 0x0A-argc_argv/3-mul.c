#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: count of arguments.
 * @argv: value of arguments.
 * Return: return 0 if success, 1 if faild.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[argc - 1]) * _atoi(argv[argc - 2]));
	return (0);
}


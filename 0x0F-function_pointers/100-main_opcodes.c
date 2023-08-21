#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its opcodes.
 * @argc: number of args.
 * @argv: value of args.
 * Return: 0 if Success
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *ma;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ma = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%.2x\n", ma[x]);
			break;
		}
		printf("%.2x", ma[x]);
	}
	return (0);
}

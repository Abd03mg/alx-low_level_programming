#include "function_pointers.h"
/**
 * masm - print opcode of program.
 * @m: input main function.
 * @c: number of bytes to be print.
 */

void masm(char *m, int c)
{
	if (m)
	{
		int i;

		for (i = 0; i < c; i++)
		{
			printf("%.2hhx", m[i]);
			if (i < c - 1)
				printf(" ");
		}
		putchar('\n');
	}
}

/**
 * main - program that write its own opcode.
 *
 * @argc: count of arguments.
 * @argv: value of arguments.
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	masm((char *)&main, num);
}

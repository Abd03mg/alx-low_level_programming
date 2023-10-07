#include "main.h"

/**
 * main - program that print all argument passed in.
 * @argc: number of args.
 * @argv: value of args.
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

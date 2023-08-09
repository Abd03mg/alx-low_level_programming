#include <stdio.h>
#include "main.h"

/**
 * main - program that print all argument it recevies.
 * @argc: count of argument.
 * @argv: array of arguments.
 * Return: return 0 if success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}

	return (0);
}


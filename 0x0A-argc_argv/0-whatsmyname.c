#include <stdio.h>
#include "main.h"

/**
 * main - program to prints its name.
 * @argc: argument counter.
 * @argv: argument value.
 * Return: return 0 if success.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}


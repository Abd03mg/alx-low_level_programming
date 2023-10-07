#include "main.h"

/**
 * main - program that print number of argc.
 * @argc: number arguments.
 * @argv: values of arguments.
 * Return: 0 if success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

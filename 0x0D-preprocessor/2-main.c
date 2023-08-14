#include <stdio.h>

/**
 * main - program that prints the name of file it was compiled from.
 * Return: 0 (success).
 */

int main(void)
{
	printf("%s", __FILE__);
	return (0);
}


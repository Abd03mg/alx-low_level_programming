#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - program that adds positive numbers.
 * @argc: count of arg.
 * @argv: value of arg.
 * Return: return 0 if success, 1 if faild.
 */

int main(int argc, char *argv[])
{
	int result;
	int i, j;

	if (argc == 1)
	{
		printf("0");
	}
	for (i = 0; i < argc; i++)
	{
		if ((argv[i] < 48) && (argv[i] > 57))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (j = 0; j < argc; j++)
	{
		result += _atoi(argv[j]);
	}
	return (0);
}



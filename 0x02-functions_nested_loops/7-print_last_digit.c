#include "main.h"

/**
* print_last_digit - print last digit of whole num
* @n: input num
* Return: return the last number
*/

int print_last_digit(int n)
{
	n = _abs(n);
	int a = n % 10;

	_putchar (a + '0');
	return (n % 10);
}


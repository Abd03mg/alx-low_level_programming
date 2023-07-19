#include "main.h"

/**
* print_last_digit - print last digit of whole num
* @n: input num
* Return: return the last number
*/

int print_last_digit(int n)
{
	int a;

	n = _abs(n);
	a = a % 10;
	_putchar (a + '0');
	return (n % 10);
}


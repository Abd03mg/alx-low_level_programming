#include "main.h"

/**
* print_last_digit - print last digit of whole num
* @n: input num
* Return: return the last number
*/

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}

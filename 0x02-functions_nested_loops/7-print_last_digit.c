#include "main.h"

/**
* print_last_digit - print last digit of whole num
* @n: input num
* Return: return the last number
*/

int print_last_digit(int n)
{
	_putchar (n + '0');
	return (n % 10);
}


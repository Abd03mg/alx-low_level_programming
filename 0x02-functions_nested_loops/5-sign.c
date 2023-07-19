#include "main.h"

/**
* print_sign - print sign of number
* @n: the numer must  be check
* Return: 1 if nuber positive, 0 if number is zero, -1 if number negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

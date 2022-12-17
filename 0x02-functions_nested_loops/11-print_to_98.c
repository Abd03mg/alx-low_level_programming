#include "main.h"
/**
* print_to_98 - function print natural number
*@n: the number that the program start from
*/

void print_to_98(int n)
{
while (n<=98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
 n++;
}
_putchar('\n');
}

#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a = 'z';
	for (a = 'z';a >= 'a';a--)
    putchar(a);
    putchar('\n');
	return (0);
}

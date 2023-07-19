#include "main.h"

/**
* main - print _putchar
* Return: always 0
*/

int main()
{
	char in[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(in[i]);
	}
	_putchar('\n');
	return 0;
}

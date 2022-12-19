#include "main.h"
/**
*_puts - main function print string.
* @str: input string.
*/

void _puts(char *str)
{
	int a;
	
	for (a = 0; str[a] != '\0'; a++)
	{
		char i;
		
		i = str[a];
		_putchar(i);
	}
	_putchar('\n');
}

#include "main.h"

/**
* print_rev - main function reverse string.
* @s: input string.
*/

void print_rev(char *s)
{
    int lenght = 0;
    int i;
    int j;

    for (i = 0; s[i] != '\0'; i++)
    {
        lenght++;
    }
    for (j = i; s[j]>=lenght; j--)
    {
        _putchar(s[j]);
    }
    _putchar('\n');
}

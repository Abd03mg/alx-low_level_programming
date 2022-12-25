#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string.
 * Return: string.
 */
char *cap_string(char *s)
{
	while(*s) 
    {
        *s = (*s > 'a' && *s <= 'z') ? *s-32 : *s;
        s++;
    }
	return (s);

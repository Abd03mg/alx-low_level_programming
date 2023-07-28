#include "main.h"

/**
 * _strncat - concatenates two strings(whole string or n of string)
 * @dest: the destenation string
 * @src: the source string
 * @n: number of bytes that will be concatend
 * Return: return dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && n > j; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}



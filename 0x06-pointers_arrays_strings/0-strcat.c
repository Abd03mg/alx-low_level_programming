#include "main.h"

/**
*_strcat - function that concatenates two strs
* @dest: the destnation str
* @src: the string will be appended
* Return: return concaten string
*/

int *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++);

	for (y = 0; src[y] != '\0'; y++)
		{
			dest[x] = src[y];
			x++;
		}

	dest[x] = '\0';
	return (dest);
}

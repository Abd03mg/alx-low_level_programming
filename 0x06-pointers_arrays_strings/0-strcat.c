#include "main.h"

/**
*_strcat - function that concatenates two strs
* @dest: the destnation str
* @src: the string will be appended
* Return: return concaten string
*/

int *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

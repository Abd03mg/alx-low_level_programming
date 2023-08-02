#include "main.h"

/**
 * _memcpy - function copy n nubers of memory
 * @dest: pointer to destnation buffer
 * @src: pointer to source
 * @n: size of buffer 
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"

/**
<<<<<<< HEAD
*_strcat - function that concatenates two strs
* @dest: the destnation str
* @src: the string will be appended
* Return: return concaten string
*/

=======
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
>>>>>>> 78235fcd03bf9321ec164b1cf7baa473fa763f09
char *_strcat(char *dest, char *src)
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

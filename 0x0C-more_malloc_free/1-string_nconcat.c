#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenate two strings.
 * @s1: first string should be concat.
 * @s2: second string should be concat.
 * @n: number of bytes will be concatenates from s2.
 * Return: newly allocated space,
 * NULL if function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, k = 0;

	for (i = 0; *(s2 + i) < n || i != '\0'; i++)
		;
	for (j = 0; *(s1 + j) != '\0'; j++)
		;
	if (i <= n)
		s3 = malloc(j + i + 1);
	else
		s3 = malloc(j + n + 1);
	if (s3 == NULL)
		return (NULL);
	while (sizeof(*s3) >= k)
	{
		if (k <= j)
		{
			*(s3 + k) = *(s1 + k);
			k++;
		}
		if (k > j)
		{
			*(s3 + k) = *(s2 + k);
			k++;
		}
	}
	return (s3);
}




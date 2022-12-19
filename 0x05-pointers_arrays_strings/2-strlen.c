#include "main.h"
/**
* _strlen - main function that calculate the lenght of string.
* @s: The String.
* Return: returns the lenght of string.
*/

int _strlen(char *s)
{
		int a;
		int len = 0;

		for (a = 0; s[a] != '\0'; a++)
		{
			len++;
		}
		return (len);
}

#include "main.h"

/**
* _islower - check is lower or not
* @c: the number should be check
* Return: always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

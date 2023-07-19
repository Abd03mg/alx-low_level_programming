#include "main.h"

/**
* _abs - return absloute value
* @c: negative number
* Return: absloute value
*/

int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}

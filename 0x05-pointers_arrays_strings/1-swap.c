#include "main.h"

/**
* swap_int - Main function.
*
* @a: first arguement.
* @b: second arguement.
*/


void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

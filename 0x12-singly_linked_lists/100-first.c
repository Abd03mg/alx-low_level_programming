#include <stdio.h>
/**
 * execbmain - function that execute befor main.
 */
void __attribute__((constructor)) execbmain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main()
{
	int c =0;
    
	for(c=0;c<10;c++)
    {
    	putchar(48+c);
    	if (c != 9)
    		putchar (',');
    		putchar (' ');
    
	}
    
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	for ( ; ch <= 'z' ; ch++)
	{
		if ( ch != 'q') || ( ch != 'e' )
			putchar(ch);
	}
	putchar('\n');
	
	return(0);
}

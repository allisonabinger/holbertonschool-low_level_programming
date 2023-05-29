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
	char ch = 'z';

	for ( ; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

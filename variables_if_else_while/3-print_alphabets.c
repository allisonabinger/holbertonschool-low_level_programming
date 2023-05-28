#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char chCAP = 'A';

	for ( ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for ( ; chCAP <= 'Z' ; chCAP++)
	{
		putchar(chCAP);
	}
	putchar('\n');

	return (0);
}

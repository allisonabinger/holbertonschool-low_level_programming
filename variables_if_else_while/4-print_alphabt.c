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

	while (ch <= 'z')
		if (ch == 'e' || ch == 'q')
			ch++;
		else
		{
			putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}

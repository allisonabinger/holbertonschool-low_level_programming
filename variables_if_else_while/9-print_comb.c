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
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(48 + n);
		if (n < 9)
		{
			putchar(44);
			putchar(32);
		}
		putchar('\n');
	}
	return (0);
}

#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by new line
 * @s: string to be printed
 * Return: output of function
 */
void print_rev(char *s)
{
	int j;

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = (i - 1);

	for(; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}

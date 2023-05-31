#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times _ should print
 * Return: output of print_line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}

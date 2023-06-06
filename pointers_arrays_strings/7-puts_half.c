#include "main.h"
/**
 * puts_half - prints the second half of string
 * @str: string for input
 * Return: empty (output)
 */
void puts_half(char *str)
{
	int a = 0;

	int m, i;

	while (a != '\0')
	{
		a++;
	}

	a = a - 1;

	if ((a % 2) != 0)
	{
		m = (a - 1) / 2;

	}
	else
	{
		m = a / 2;

	}
	i = a - m;

	for (; i < a; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

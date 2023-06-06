#include "main.h"
/**
 * puts_half - prints the second half of string
 * @str: string for input
 * Return: empty (output)
 */
void puts_half(char *str)
{
	int a = 0;

	int m, i, n;

	while (a != '\0')
	{
		a++;
	}

	a = a - 1;

	if (a % 2 == 0)
	{
		for (i = a / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}

	}
	else if (a % 2 != 0)
	{
		for (n = (a - 1) / 2; n < a - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

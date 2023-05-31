#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: output of more_numbers
 */
void more_numbers(void)
{
	int n, i;

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 9)
			{
				_putchar(48 + (i / 10));
			}

			_putchar(48 + (i % 10));
		}

	_putchar('\n');
	}
}

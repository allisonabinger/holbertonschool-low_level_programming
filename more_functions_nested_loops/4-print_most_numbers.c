#include "main.h"
/**
 * print_most_numbers - prints numbers 0-9 except 2 and 4
 *
 * Return: Results of function
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(48 + n);
		}
	}
	_putchar('\n');
}

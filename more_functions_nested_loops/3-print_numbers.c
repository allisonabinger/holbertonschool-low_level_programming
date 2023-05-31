#include "main.h"
/**
 * print_numbers - prints numbers 0-9, followed by newline
 *
 * Return: always 0
 */
void print_numbers(void);
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(48 + n);
	}
	_putchar('\n');
	return (0);
}

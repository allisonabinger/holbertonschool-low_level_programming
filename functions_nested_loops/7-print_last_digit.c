#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number for input
 * Return: Always (0)
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}

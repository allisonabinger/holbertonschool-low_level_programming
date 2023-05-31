#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * separated by a comma, followed by a space, printed in order
 *
 * @n: number to be inputed
 * Return: list of integers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for ( ; n <= 98 ; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}

#include "main.h"
/**
 * print_square - prints a square with the h + w of size given
 * @size: height and width of square, represented by pound sign
 * Return: output of function
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

#include "main.h"
/**
 * _abs - computes the absolute value of an intenger
 * @n: number to be computed
 * Return: Always (0)
 */
int _abs(int n)
{
	int n;

	if (n < 0)
	{
		int abs_n;

		abs_n = n * -1;

		return (abs_n);
	}
	return (n);
}

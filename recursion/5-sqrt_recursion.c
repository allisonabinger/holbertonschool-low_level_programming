#include "main.h"
int _result_sqrt_rec(int n, int i);

/**
 * _sqrt_recursion - guesses the natural square root of a number
 * @n: number to find the square root of
 * Return: square root of @n or -1 if no natural sqrt is found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_result_sqrt_rec(n, 0));
}

/**
 * _result_sqrt_rec - returns the natural square root of a number
 * @n: number to calculate the square root of
 * @i: increment
 * Return: resulting square root
 */

int _result_sqrt_rec(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_result_sqrt_rec(n, i + 1));
}

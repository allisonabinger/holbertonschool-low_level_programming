#include "main.h"
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number to find the square root of
 * Return: square root of @n or -1 if no natural sqrt is found
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}


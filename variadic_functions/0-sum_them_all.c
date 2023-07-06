#include "variadic_funtions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of paramets passed
 * @...: variable number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, num_args);
	
	int sum = 0;

	for (int i = 0; i < num_args; i++)
	{
		int arg = va_arg(args, int);
		sum += arg;
	}

	va_end(args);

	return (sum);
}

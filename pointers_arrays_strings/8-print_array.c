#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the n number of elements of an array of integers
 * @a: array input
 * @n: number of elements of the array to be printed
 * Return: n elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d, ", a[i]);
		else
		{
			printf("%d", a[i]);
			printf("\n");
		}
	}
}

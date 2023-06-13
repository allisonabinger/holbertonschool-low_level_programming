#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of ints
 * @a: square matrix of which we print the sum of diagonals
 * @size: the size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum = 0;

	unsigned int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum2);
}

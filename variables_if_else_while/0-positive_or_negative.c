#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%dis negative",n);
	}
	else if (n == 0)
	{
		printf("%dis zero",n);
	}
	else if (n > 0)
	{
		printf("%dis positive",n);
	}
	return (0);
}

#include "main.h"

int guess_prime(int n, int i);

/**
 * is_prime_number - determines if n is prime number
 * @n: number to determine
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (guess_prime(n, n - 1));
}

/**
 * guess_prime - iterating function to determine prime
 * @n: number to determine
 * @i: incriment
 * Return: 1 if prime, 0 if not
 */
int guess_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (guess_prime(n, i - 1));
}

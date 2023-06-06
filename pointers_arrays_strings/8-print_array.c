#include "main.h"
/**
 * print_array - prints the n number of elements of an array of integers
 * @a: array input
 * @n: number of elements of the array to be printed
 * Return: n elements 
 */
void print_array(int *a, int n)
{
	for (; a[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
}

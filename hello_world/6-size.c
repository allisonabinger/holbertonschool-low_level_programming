#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: print the size of various types
 *
 * Return: Always 0 (Success
 */
int main()
{
	char charSize;
	int intSize;
	long int longIntSize;
	long long int longLongSize;
	float floatSize;

	printf("Size of char: %zu bytes\n", sizeof(charSize));
	printf("Size of int: %zu bytes\n", sizeof(intSize));
	printf("Size of long int: %zu bytes\n", sizeof(longIntSize));
	printf("Size of long long int: %zu bytes\n", sizeof(longLongSize));
	printf("Size of float: %zu bytes\n", sizeof(floatSize));

	return (0);
}

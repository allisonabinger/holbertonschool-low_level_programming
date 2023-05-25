#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: print the size of various types
 *
 * Return: Always 0 (Success
 */
int main(void)
{
	char charSize;
	int intSize;
	long int longIntSize;
	long long int longLongSize;
	float floatSize;

	printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
	printf("Size of a int: %zu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntSize));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongSize));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));

	return (0);
}

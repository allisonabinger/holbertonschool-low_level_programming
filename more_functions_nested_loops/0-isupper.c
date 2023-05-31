#include "main.h"
/**
 * _isupper - checks if value c is uppercase
 * @c: character to input into stdinp
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
 * _isdigit - checks if value c is a digit 0-9
 * @c: character to input into stdinp
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

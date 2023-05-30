#include "main.h"
/**
 * _islower - checks if value c is lowercase
 * @c: character to input into stdinp
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
	{
		return (1);
	}
	return (0);
}

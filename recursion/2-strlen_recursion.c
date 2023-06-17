#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s : string
 * Return: integer that is the length of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

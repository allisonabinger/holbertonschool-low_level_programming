#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s : string
 * Return: integer that is the length of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

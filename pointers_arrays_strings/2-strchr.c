#include "main.h"
#include <stdio.h>
/**
 * _strchr - returns a pointer to the first occurence of the character c
 * in the string s, or null if the character is not found
 * @s: string to be used
 * @c: character to be searched for
 * Return: pointer to the first occurence of character, or null if not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
		return (NULL);
		}
	}
}

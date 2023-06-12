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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		return (NULL);
	}
}

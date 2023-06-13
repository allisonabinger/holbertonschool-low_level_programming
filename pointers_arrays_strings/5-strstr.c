#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the substring needle in haystack
 * @needle: string to find
 * @haystack: string to examine
 * Return: pointer to beginning of substring or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

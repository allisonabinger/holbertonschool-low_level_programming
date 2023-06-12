#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates first occurrence in string s of any bytes in accept
 * @s: pointer to string s
 * @accept: pointer to string accept
 * Return: pointer to byte in S or Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s != accept[j])
			{
				return(s);
			}
		}
		s++;
	}
	return (NULL);
}

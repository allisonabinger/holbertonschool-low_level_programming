#include "main.h"
/**
 * _strpbrk - locates first occurrence in string s of any bytes in accept
 * @s: pointer to string s
 * @accept: pointer to string accept
 * Return: pointer to byte in S or Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	int k = 0;

	for (i = 0, s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
			{
				s++;
				k++
			}
		}
	}
	if (k != 0)
	{
		return (s);
	}
	return (NULL);
}

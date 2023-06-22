#include "main.h"
/**
 * _strspn - returns number of bytes of s which consist of bytes from accept
 * @s: initial segment string
 * @accept: string to gather bytes from
 * Return: unsigned int, lengths of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;

	unsigned int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
				k = 1;
			}
		}
	if (k == 0)
	{
		return (a);
	}
	}

	return (0);
}

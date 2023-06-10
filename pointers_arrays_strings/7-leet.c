#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string converted
 * Return: (s)
 */
char *leet(char *s)
{
	int i, j;

	char *alpha = "aAeEoOtTlL";

	char *num = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}

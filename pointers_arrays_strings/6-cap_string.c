#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: S
 */
char *cap_string(char *s)
{
	int i, j;

	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i + 1] = s[i] - 32;
			}
		}
	}

	return (s);
}

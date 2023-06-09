#include "main.h"
/**
 * _strncat - concatenates two strings, using up to n of src
 * @dest: destination string
 * @src: source string to concatenate from
 * @n: maximum amount of bytes to use form src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}

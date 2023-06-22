#include "main.h"
/**
 * *_strncpy - copies src string into dest string
 * @dest: destination string
 * @src: source string to copy into dest
 * @n: the amount of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string to concatenate with dest
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
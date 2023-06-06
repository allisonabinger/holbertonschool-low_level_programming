#include "main.h"
/**
 * *_strcpy - copies tring pointed to by *src, including null, to the buffer
 * pointed to by dest
 * @dest: pointer to buffer for string to be copied into
 * @src: source string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

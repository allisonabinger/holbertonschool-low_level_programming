#include "main.h"
/**
 * _strncpy - copies src string into dest string
 * @dest: destination string
 * @src: source string to copy into dest
 * @n: the amount of bytes to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		src[i] = dest[i];
		i++;
	}
	
	dest[i] = '\0';

	return (dest);
}

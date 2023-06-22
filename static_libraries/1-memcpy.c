#include "main.h"
/**
 * _memcpy - copies n bites from memory area src to memory area dest
 * @src: copies into
 * @dest: copies from
 * @n : unsigned int, bytes to copy
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * and returns a pointer to the allocated memory, the memory is set to 0
 * @nmemb: the amount of elements
 * @size: number of bytes
 * Return: If nmemb or size is 0, or if malloc fails, return NULL
 * else, return pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}

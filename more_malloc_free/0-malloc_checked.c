#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc, if malloc fails,
 * malloc_checked should cause normal process termination.
 * @b: value of memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b);
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}

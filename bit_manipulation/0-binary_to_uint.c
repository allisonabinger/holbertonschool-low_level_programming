#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: char string
 * Return: success always (0)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++) {
		if (b[i] != '0' && b[i] != '1') {
			return 0;
		}

		n = n << 1;
		n += (b[i] - '0');
	}

	return (n);
}

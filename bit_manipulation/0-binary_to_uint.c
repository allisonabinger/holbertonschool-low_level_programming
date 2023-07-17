#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void print_binary(unsigned long int n)
{
	while (n > 0)
	{
		printf(%d, n & 1);
		n >>=1;
	}
}

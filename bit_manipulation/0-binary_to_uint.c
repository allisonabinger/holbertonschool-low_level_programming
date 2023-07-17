#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void print_binary(unsigned long int n)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
	  printf("%d", (n & (1 << i)) ? 1 : 0);
  }
}

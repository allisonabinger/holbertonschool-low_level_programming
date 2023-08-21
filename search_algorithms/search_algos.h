#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
void print_array(int array[], size_t left, size_t right);
int binary_search(int *array, size_t size, int value);

#endif

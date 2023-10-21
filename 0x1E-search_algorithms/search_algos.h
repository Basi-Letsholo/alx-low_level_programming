#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

void print_array(int *array, size_t start, size_t end);
int binary_search_func(int *array, size_t start, size_t end, int value);
int search_func(int *array, size_t i, size_t size, int value);

#endif

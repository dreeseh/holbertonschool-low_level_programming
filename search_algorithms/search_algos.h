#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Prototypes */
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);
int binary_search(int *array, int left, int right, int value);

#endif /* SEARCH_ALGOS_H */
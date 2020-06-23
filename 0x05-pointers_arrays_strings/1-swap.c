#include "holberton.h"
/**
 * swap_int - swaps the values of the ints
 * @a: integer one
 * @b: integer two
 * return: is nothing
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

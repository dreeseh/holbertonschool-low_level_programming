#include "holberton.h"
/**
 * reverse_array - will reverse an array
 * @a: pointer to beginning
 * @n: pointer to end
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

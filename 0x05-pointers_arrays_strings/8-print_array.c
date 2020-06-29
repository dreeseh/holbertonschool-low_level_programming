#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: array
 * @n: elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int loop;

	for (loop = 0 ; loop < n - 1 ; loop++)
	{
		printf("%d, ", a[loop]);
	}

	loop = n - 1;

	printf("%d", a[loop]);

	printf("\n");
}

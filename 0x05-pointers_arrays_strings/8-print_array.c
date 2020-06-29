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
	int loop = 0;

	while (loop < n)
	{
		if (loop % 10)
		{
			printf(", ");
		}
		if (!(loop % 10) && loop)
		{
			printf("\n");
		}
		printf("%d", a[loop]);
		loop++;
	}
	printf("\n");
}

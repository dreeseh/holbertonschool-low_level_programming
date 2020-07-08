#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints "n" to 98
 * @n: int from which we count to 98 from
 * Return: is void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}

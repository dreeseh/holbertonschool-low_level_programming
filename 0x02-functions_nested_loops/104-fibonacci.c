#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: is zero
 */

int main(void)
{
	unsigned long int w, x = 0, y = 1, z;
	unsigned long int x1, x2, y1, y2, z1, z2;

	for (w = 0 ; w < 92 ; w++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}

	x1 = x / 10000000000;
	x2 = x % 10000000000;
	y1 = y / 10000000000;
	y2 = y % 10000000000;

	for (w = 0 ; w < 98 ; w++)
	{
		z1 = x1 + y1;
		z2 = x2 + y2;
		if (z2 > 10000000000)
		{
			z1 = z1 + 1;
			z2 = z2 % 10000000000;
		}
		if (w < 97)
		{
			printf("%lu%lu, ", z1, z2);
			x1 = y1;
			x2 = y2;
			y1 = z1;
			y2 = z2;
		}
		else
		{
			printf("%lu%lu\n", z1, z2);
		}
	}
	return (0);
}

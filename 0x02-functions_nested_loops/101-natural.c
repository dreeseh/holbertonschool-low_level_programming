#include <stdio.h>

/**
 * main - computes & prints the sum of all multiples of 3 || 5 > 1024
 * Return: is void
 */

int main(void)
{
	int a, sum;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}

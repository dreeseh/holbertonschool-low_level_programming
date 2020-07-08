#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: is zero
 */

int main(void)
{
	int i = 1, j = 1, sum = 0;
	while (i < 4000000)
	{
		i = i + j;
		j = i - j;
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

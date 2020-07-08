#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 * Return: 0
 */
int main(void)
{
	int h, i;
	long int j;

	j = 612852475143;
	for (i = 2; j > 1; i++)
		while (j % i == 0)
		{
			h = i;
			j = j / i;
		}
	printf("%d\n", h);
	return (0);
}

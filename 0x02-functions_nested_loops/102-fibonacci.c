#include <stdio.h>

/**
 * main - prints 50 fib numbers including 1 & 2
 * Return: is zero
 */

int main(void)
{
	long int j, k, hold;
	int i = 0;

	k = 1;
	hold = 0;
	j = 0;
	while (i < 50)
	{
		hold = k;
		k = j + k;
		j = hold;
		printf("%ld", k);
		i++;
		if (i <= 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

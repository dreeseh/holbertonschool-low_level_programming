#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: 0 Value
 */

int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}

		if (x % 5 == 0)
		{
			printf("Buzz");
		}

		if (x % 3 != 0 && x % 5 != 0)
		{
			printf("%d", x);
		}

		if (x != 100)
		{
			printf(" ");
		}

		x++;
	}

	printf("\n");

	return (0);
}

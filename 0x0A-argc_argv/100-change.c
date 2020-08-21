#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: int for number of args
 * @argv: char pointer to array of args
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, j = 0, k, l;
	int m[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (k = 0; k < 5; k++)
		{
			l = i / m[k];
			i -= l * m[k];
			j += l;
			if (i == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", j);
	return (0);
}

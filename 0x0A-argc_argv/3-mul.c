#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies 2 numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 or 1(Error)
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

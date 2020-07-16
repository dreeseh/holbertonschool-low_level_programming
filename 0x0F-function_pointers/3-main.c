#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - passing arguments to main
 * @argc: argument count
 * @argv: argument vector
 * Return: is zero
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

#include <stdio.h>
/**
 * main - will print the number of args
 * @argc: int, num of args
 * @argv: char pointer, array of args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

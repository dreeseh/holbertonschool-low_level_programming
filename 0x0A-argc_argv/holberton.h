#include <stdio.h>
/**
 * main - prints the program name
 * @argc: int, number of args
 * @argv: char pointer, array of args
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
